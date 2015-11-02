#include<systemc.h>
//decoder module
SC_MODULE(decoder)
{
//input and output ports
  sc_in<bool> b0,b1;
//  sc_in<bool>b1;
  sc_out<bool> d0,d1,d2,d3;

  SC_CTOR(decoder)
  {
    SC_METHOD(decode);
    sensitive<<b0<<b1;
   }
   
   ~decoder(){
      //delete stuff :P
   }
   
void decode (void)
 {
 
  if (b0==0 && b1==0){
   d0=1;
   d3=0; }
    else if (b0==0 && b1==1){
     d1=1;
     d0=0;
        }
    else  if (b0==1 && b1==0){
       d2=1;
       d1=0;
     }
      else  if (b0==1 && b1==1){
         d3=1; 
         d2=0;
         
         }
         
      }
};



