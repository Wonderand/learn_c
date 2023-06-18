#include <stdio.h>

#define BOOL int
#define TURE 1
#define FALSE 0

/**
 * 
 *在c语言中没有明确的Boolean类型，所以C语言判断真假以0为假
 *非零为真，但是这种做法不直观，所以我们可以借助C语言的宏定义
*/
void main(){

    int isPass = 1;

    if (isPass)//0表示假的非零便是真的
    {
        printf("通过考试");
    }
    
    //可以使用宏定义来完成

    //定义一个布尔变量
    BOOL isOk = TURE;//等价int isOk = 1

    if (isOk)
    {
        printf("\nok");
        /* code */
    }
    
}