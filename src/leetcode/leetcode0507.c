#include<math.h>
#include<stdbool.h>
// 一个正整数所有的正因子之和等于本身，这个数即为完美数
bool checkPerfectNumber(int num){
    int cnt = 0;
    if(num == 1)
    {
        return false;
    }

    //二分查找，较少遍历次数，时间复杂度O(sqrt(n))
    for(int i=2; i<sqrt(num);i++)
    {
        int j = 0;
        if(num%i == 0)
        {
            j = num/i;
            cnt += (i+j);
        }
    }

    if(cnt+1 == num)
    {
        return true;
    }
    return false;
}