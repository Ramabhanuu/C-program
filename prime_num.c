#include<stdio.h>
void main()
//to find whether given number is prime or not
{
   int n,i,c=0;
   printf("enter n value:");
   scanf("%d",&n);
   for(i=2;i<=n;i++)
   {
   if(n%i==0)
   c++;
   }
   
   if(c==1)
   {
   printf("it is a prime number");
   }
   else 
   {
   printf("it is not a prime number ");
   }
}