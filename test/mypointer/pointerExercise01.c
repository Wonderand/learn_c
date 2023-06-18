#include <stdio.h>

void main(){

    //写一个程序，获取一个变量num的地址，并显示到终端
    //将num的地址赋值给ptr,并通过prt去修改num的值
    //分析prt的类型是int*，注意指针的类型和该指正指向的变量类型是对应关系
    

    int num = 88;
    int* prt = &num;

    printf("num的值=%d num的地址=%p",num,&num);

    *prt=99;
    //通过prt去修改num的值，num的变量值也就相应的被修改
    printf("\nnum的值=%d num的地址=%d",num,&num);
}