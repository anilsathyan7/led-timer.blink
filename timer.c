#include<msp430.h>
main()
  {
     P1OUT=1;
     P1DIR=1;

	TACTL=0x0220;
     while(1)
      {
        while(!(TACTL & BIT0)) 
                ;
           TACTL &=~(BIT0);
           P1OUT ^=BIT0;
      }
  }
























