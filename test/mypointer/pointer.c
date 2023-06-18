//讲解指针的入门
#include <stdio.h>

void main(){

    int num = 1;
    //定义一个指针变量
    //说明
    //1。int*表示类型为指针类型
    //2.名称ptr就是一个int*类型
    //3.ptr指向了一个int类型的变量
    int *ptr = &num;
    //num的地址是多少
    //说明1：如果要输出一个变量的地址，使用变量格式是%p
    //说明2：&num 表示取出num这个变量的对应地址
    printf("num 的值=%d num 地址=%p",num&num);

    //1指针变量,本身也有地址&ptr
    //2指正变量,存放的地址ptr
    //3获取指针指向的值*ptr
    printf("\nprt的地址是%p \nprt存放的值是一个地址%p\nptr指向的值=%d",&ptr,ptr, *ptr);

}