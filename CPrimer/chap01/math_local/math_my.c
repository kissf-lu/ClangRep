/* local math def

add
*/
#include "math.h"
#include "math_tool.h"


// 计算求和
float add_my(float x, float y){
    return x + y;
}

// 线性非尾递归阶乘函数
int factorial(int n){
    if (n <= 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }

}

// 线性非尾递归求和

int linear_sum(int S[], int n){
    if (n <=0) {
        return 0;
    }
    else {
        return S[n-1] + linear_sum(S, n-1);
    }
}

// 线性尾递归求和
int linear_sum_tail_rec(int S[], int n, int total){
    if (n <=0) {
        return total;
    }
    else {
        return linear_sum_tail_rec(S, n-1, S[n-1] + total);
    }
}

//
int binary_search_scr_tail(int data [], int target, int low, int high){
    if (low > high) {
        return 0;
    }
    else {
        int mid;
        mid = floor((low + high) / 2);
        if (data[mid] == target) {
            return 1;
        }
        else if (data[mid] < target) {
            return binary_search_scr_tail(data, target, mid+1, high);
        }
        else {
            return binary_search_scr_tail(data, target, low, mid-1);
        }
    }
}
