// 给定一个整数n，计算所有小于等于n的非负数中数字1出现的个数。

#include<stdio.h>
#include<math.h>

int countDigitOne(int n)
{
    long count = 0, i = 1;
    while(i <= n)
    {
        long divider = i * 10;
        count += (n / divider) * i + fmin(fmax(n % divider -i + 1, 0), i);
        i = divider;
    }
    return count;
}

int main(int argc, int **argv)
{
    int n;
    printf("plese input a number, exit if 1:\n");
    while(n != 1)
    {
        scanf("%d", &n);
        if(n < 0)
        {
            printf("number should be greater than 0.\n");
        }
        else
        {
            printf("when %d, digit one occurs %d times.\n", n, countDigitOne(n));
        }
    }
    return 0;
}