#include<stdio.h>
int main()
{
 
  int a, b, c;
   scanf("%d %d %d", &a, &b, &c);

// mini 
   if(a <= b && a <= c){
    printf("%d ", a);
   }
   else if (b<=a && b<=c)
   
   {
      printf("%d ", b);
   }
   else{
    printf("%d ", c);
   }
// max 
   if(a >= b && a >= c){
    printf("%d\n", a);
   }
   else if (b>=a && b>=c)
   
   {
      printf("%d\n", b);
   }
   else{
    printf("%d\n", c);
   }
   
   return 0;
}