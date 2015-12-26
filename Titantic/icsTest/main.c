#include <stdio.h>
#include "proc1.c"
unsigned x = 257;
short y,z = 2;
void proc1(void);
void main()
{
    proc1();
    printf("x = %u,z = %d\n",x,z);
   
}
