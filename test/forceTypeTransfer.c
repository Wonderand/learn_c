#include <stdio.h>

void main()
{
    double d1 = 1.234;
    int num = (int)d1; // 直接截断小数后的部分
    //强制转换只对最近的数有效，如果希望针对更多的表达式
    //转换，使用()

    int num2 = (int)3.5*10+6*1.5;//39
    int num3 = (int)(3.5*10+6*1.5);//44

    printf("num2=%d\n",num2);
    printf("num3=%d\n",num3);

    printf("num=%d", num);
}