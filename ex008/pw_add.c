#include <stdio.h>

int pw_add(int a, int b);

int main(void)
{
    printf("5 + 3 = %d\n", pw_add(5, 3));
    printf("-2 + 4 = %d\n", pw_add(-2, 4));
    printf("0 + 0 = %d\n", pw_add(0, 0));
    printf("-5 + -3 = %d\n", pw_add(-5, -3));
    return 0;
}
