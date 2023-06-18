#include <stdio.h>

void main(){

    //浮点型默认是double型，声明float型常量时，要在后面加f或F;
    //
    double d1 = 1.18909095; //从double到float截断，1.1是double
    float d2 = 1.1f;//1.1F就是float

    double d3 = 1.3;//OK

    double d4 = 5.12;
    double d5 = .512;//等价于0.512

    //科学计数法
    double d6 = 5.12e2;//等价5.12*(10^2)
    double d7 = 5.12e-2;//等价5.12*(10^-2)=5.12/100 = 0.0512
    //在输出时%f默认保留6位小数
    printf("d1=%.15f d2=%f d3=%f d4=%f d5=%f d6=%f d7=%f",d1,d2,d3,d4,d5,d6,d7);
    //通常采用高精度的double类型

    
}