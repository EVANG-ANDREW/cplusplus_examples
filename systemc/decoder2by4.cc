#include "driver2by4.h"
#include "decoder2by4.h"
#include "monitor2by4.h"
#include <systemc.h>

int sc_main(int argc, char *argv[])
{
 sc_signal<bool> in_1, in_2, out_1, out_2, out_3, out_4;  //signals to connect different modules

 decoder THEDecode("decoder_instance");
 driver THEDriver("driver"); 
 monitor THEMonitor("monitor");
 
 
 //inputs format: module instance
 THEDriver.d1(in_1);
 THEDriver.d2(in_2);
 THEMonitor.in__1(in_1);  //monitor for inputs
 THEMonitor.in__2(in_2);
 THEDecode.b1(in_1);
 THEDecode.b2(in_2);
 
 // outputs format: module instance at declaired port
 THEDecode.d0(out_1);
 THEDecode.d1(out_2);
 THEDecode.d2(out_3);
 THEDecode.d3(out_4);
 THEMonitor.out__1(out_1);  
 THEMonitor.out__2(out_2);
 THEMonitor.out__3(out_3);
 THEMonitor.out__4(out_4);

// CREATING TRACE FILE
sc_trace_file *tf;
tf= sc_create_vcd_trace_file("timing_diagram"); //sets the name of the file
tf->set_time_unit(1, SC_NS);

//modules for trace & signals interconnecting
sc_trace(tf, in_1, "binary_input_one"); // signals to be traced
sc_trace(tf, in_2, "binary_input_two");  //label of the 'axes'
sc_trace(tf, out_4, "input_is_three");
sc_trace(tf, out_3, "input_is_two");
sc_trace(tf, out_2, "input_is_one");
sc_trace(tf, out_1, "input_is_zero"); 


if( !sc_pending_activity() )
sc_start(75,SC_NS);
//close the trace file
sc_close_vcd_trace_file(tf);
 
 return 0;
 }

