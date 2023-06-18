#include <stdio.h>

void main(){

    int num = 100;
    int *p = &num;
    int *p2 =p;
    *p2 = 55;

    printf("num=%p *p=%p *p2=%p",num,*p,*p2);
}