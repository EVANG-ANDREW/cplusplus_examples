

#include<systemc.h>

SC_MODULE(driver)
{
  sc_out<bool> d1,d2;
 

 SC_CTOR(driver){
   SC_THREAD(Drive);
     }
     
 void startDrive(void)
{
	while(1)
	{
		d1=0;
		d2=0;
		wait(5,SC_NS);
		d2=1;
		wait(5,SC_NS);
		d1=1;
		d2=0;
		wait(5,SC_NS);
		d2=1;
		wait(5,SC_NS);
	 }

	}
};


