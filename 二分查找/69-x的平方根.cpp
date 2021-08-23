/*

实现 int sqrt(int x) 函数。

计算并返回 x 的平方根，其中 x 是非负整数。

由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。

示例 1:
输入: 4
输出: 2

示例 2:
输入: 8
输出: 2
说明: 8 的平方根是 2.82842..., 
     由于返回类型是整数，小数部分将被舍去。

*/


#include<iostream>
using namespace std;


class Solution {   // 二分查找
public:
    int mySqrt(int x) {
        int left = 0, right = x, ans = -1;
        while (left <= right){
            int mid = left + (right - left) / 2;
            if ((long long) mid * mid <= x){
                ans = mid;
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        return ans;
    }
};


class Solution2{     // 换底公式 
public:
    int mySqrt(int x){
        if (x == 0)
            return 0;

        int ans = exp(0.5 * log(x));
        return ((long long) (ans+1) * (ans+1) <= x? ans+1: ans);
    
    }
};