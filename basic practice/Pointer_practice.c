#include<stdio.h>
#include<stdlib.h>
int main() {

   int x = 10;
   int *p = &x;
   printf("%d\n", *p);  //10
   printf("%p\n", (void*)p); // address 000000c35d3ff9a4

   *p = 20;
   printf("%d\n", *p);
   printf("%d\n", *p + 10); //30

   (*p)++;
   printf("%d\n", x);  //21


   return 0;

}