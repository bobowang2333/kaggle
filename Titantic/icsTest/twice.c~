#include <stdio.h>
unsigned float_twice(unsigned uf) {
    int var = ~(1 << 31);
    int sign = (uf >> 31) & 0x1;
    int ufvar = uf & var; // put the top position to 0
    if(!(ufvar))
        return uf;
    int  var2 = ufvar >> 23;
    int exp = var2 + 1;
   // return exp;
    int var3 = ~((1 << 31) >> 8);
    int fraction = var3 & ufvar;
    int res = (sign << 31) + fraction + (exp << 23);
    return res; 
 }       
int main(void)
{
    int res;
    res = float_twice(0x800000);
    printf("%x\n",res);
    return 0;
}
