#include <stdio.h>
unsigned float_i2f(int x)
{
    if(!(x))
        return 0x0;
    if(x == 0x80000000)
        return 0xcf000000;
    int i = 1;
    int sign = (x >> 31) & 0x1;
    if(sign)
        x = ~(x - 1);
  // return x;
   int  k = (0x1 << 31);
    while((!((x << i) & k)) && (i <= 31))
        i++; 
    //return i;
    int exp = 31 - i + 127;
    exp = exp << 23;   //阶码
   // return exp;
    int var = (1 << (31 - i));
    var = var ^ x;
    int fraction;
    if((31 - i - 1) < 22)
    {
        fraction = var << (22 - (31 - i -1));
    }else{
        fraction = var >> (31 - i - 1 - 22);
    }
    //return fraction;
    int num = (sign << 31) + exp + fraction;
    return num;
}
int main(void)
{
    int res;
    float a = 0xcb800001;
    //res = float_i2f(0x80800001);
    res = (int)(a);
    printf("%x\n",res);
    //printf("%x\n",0x09a);
    return 0;
}
