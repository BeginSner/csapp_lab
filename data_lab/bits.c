#include <stdio.h>
int thirdBit(){
    int a = 0x49;
    int b = a << 9;
    int c = a+b;
    return c + (c << 18);
}
int isTmin(int x){
    // printf("%d,%d\n",!(x+x),!!x);
    //!(int)(-2147483648-2147483648)才是1,去掉(int)类型转化后是0
    int a = x+x;
    int c = !a;
    int b = !!x;
    return c&b;
}
int main(){
    // printf("%d\n",sizeof(long long));
    //thirdBit 32位
    // printf("%x\n",thirdBit());

    //isTmin
    // printf("%d\n",!(int)(-2147483648-2147483648));
    // printf("%d\n",isTmin(-2147483648));

    
    return 0;
}