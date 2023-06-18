#include <stdio.h>

void change(int a) {
    a = 10;
    printf("a = %d\n",a);
}

int main() {
    int x = 5;

    printf("Before change, x = %d\n", x);

    change(x);

    printf("After change, x = %d\n", x);

    return 0;
}