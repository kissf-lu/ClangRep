#include <stdio.h>
#include "math_local/math_tool.h"

int main(void)
{
    printf("%s\n", STARTS);

    float x, y, add_res;
    int i, n, fac_res, sum_res;

    /*
    // add func test
    printf("%s math add %s\n", LINES,  LINES);
    printf("please inter add x:");
    scanf("%f", &x);
    printf("please inter add x:");
    scanf("%f", &y);
    add_res = add_my(x, y);
    printf("add: %f\n", add_res); 
    
    // factorial test
    printf("%s math factorial %s\n", LINES,  LINES);
    printf("please inter add n:");
    scanf("%d", &n);
    fac_res = factorial(n);
    printf("factorial: %d\n", fac_res);
    */

    // linear_sum test
    printf("%s math linear_sum %s\n", LINES, LINES);
    printf("please inter sum num:");
    scanf("%d", &n);

    int sum_ls [n];

    for (i=0; i < n; i++){
        printf("please enter %d int value: ", i);
        scanf("%d", &sum_ls[i]);
    }

    sum_res = 0;

    sum_res = linear_sum_tail_rec(sum_ls, n, sum_res);

    printf("linear_sum: %d\n", sum_res);
    

    // binary search
    /*
    int data_len;
    printf("%s math binary_search %s\n", LINES, LINES);
    printf("please inter search data len:");
    scanf("%d", &data_len);

    int target, low, high, get_if;
    low = 0;
    high = data_len;
    int data_search [data_len];

    for (i=0; i < data_len; i++){
        printf("please give %d value: ", i);
        scanf("%d", &data_search[i]);
    }
    printf("please inter search target:");
    scanf("%d", &target);

    get_if = binary_search_scr_tail(data_search, target, low, high);
    if (get_if == 0) {
        printf("don`t have target value: %d\n", target);
    }
    else {
        printf("find target value: %d\n", target);
    }
    */
    
    printf("%s\n", STARTS);

    return 0;
}
