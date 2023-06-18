#include <stdio.h>

//自动类型转换
void main(){

    //举例1
    char c1 = 'a';
    int num1 = c1;
    double d1 = num1;
    //ok

    //举例2，字节数不同转换大字节的，字节数相同&一种有
    //符号，一种无符号，则转无符号
    short s1 = 10;
    int num2 = 20;
    int num3 = s1+num2;
    //ok

    //举例3
    float f1 = 1.1f;
    double d2 = 4.58667435;
    f1 = d2; //出现精度损失
    printf("f1=%.8f",f1);
}