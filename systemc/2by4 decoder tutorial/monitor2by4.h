//monitor module
#include <iostream>
#include<systemc>

using namespace std;

SC_MODULE(monitor)
{
 sc_in<bool> in__1,in__2,out__1,out__2,out__3,out__4;
 
  SC_CTOR(monitor)
   {
     SC_METHOD(monitoring);
     sensitive<< out__1<< out__2<<out__3<< out__4;  //setting the sensitivity
     dont_initialize();
     
    }
    
     void monitoring(void)
  {
   cout<<"At "<<sc_time_stamp()<<" inputs are "<<in__1<<" and "<<in__2<<" the outputs are "<<out__1<<", "<<out__2<<", "<<out__3<<", "<<out__4<<endl;
   }

};

