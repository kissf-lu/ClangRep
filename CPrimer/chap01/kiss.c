#include <stdio.h>
#include "math_local/math_tool.h"

int main(void)
{
    printf("%s\n", STARTS);

    float x, y, add_res;

    printf("please inter add x:");
    scanf("%f", &x);
    printf("please inter add x:");
    scanf("%f", &y);

    add_res = add_my(x, y);
    printf("add: %f\n", add_res);

    printf("%s\n", STARTS);

    return 0;
}
