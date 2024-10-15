#include<stdio.h>
void main()
{int unit;
 float e_bill;
 printf("enter electricity units:");
 scanf("%d",&unit);
 if(unit<=50)
 { e_bill=unit*0.5;
   printf("your electricity bill is %f",e_bill);
 }
 else if(50<unit && unit<=150)
 {e_bill=25+((unit-50)*0.75);
 printf("your electricity bill is %f",e_bill);
 }
 else if(150<unit && unit<=250)
 {e_bill=100+((unit-150)*1.20);
 printf("your electricity bill is %f",e_bill) ; 
 }
 else if(250<unit)
 {e_bill=120+((unit-250)*1.5);
  printf("your electricity bill is %f",e_bill) ; 
  }
 }
  
 