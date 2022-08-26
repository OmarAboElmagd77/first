#include <stdio.h>

int main() {
    while(1)
    {
   int y = 0;
   int x=0;
   int bit=0;
   printf("Enter any number = ");
   scanf("%d",&x);
   printf("Enter the nth bit to toggle(0-31):");
   scanf("%d",&bit);
   y=(x ^ (1 << (bit )));
   printf("number before toggling %d bit:%d \n",bit,x);
   printf("number after toggling %d bit:%d \n ",bit,y);
    }
    return 0;
}
