#include<stdio.h>

int main()
{
  int a;
   int b;
   char c;
   scanf("%d",&a);

   
   
   scanf(" %c",&c);
   if(c=='+')
   {
    
    scanf("%d",&b);
    printf("=%d",a+b);
   

   }
   if(c=='-')
   {
     
    scanf("%d",&b);
    printf("=%d",a-b);
    
   }
   if(c=='*')
   {
     
    scanf("%d",&b);
    printf("=%d",a*b);

   }
   if(c=='/')
   {
     
    scanf("%d",&b);
    printf("=%d",a/b);
   }
   return 0;
}
