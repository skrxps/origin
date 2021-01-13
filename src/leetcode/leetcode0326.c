#include<stdbool.h>
#include<math.h>
#include<stdio.h>

bool isPowerofThree(int n)
{
    // get max power of three when type is int
    int maxpower = (int)pow(3, (int)(log(0x7FFFFFFF)/log(3)));
    // if n greater than 0 and n is approximate of max power, then n is power of 3
    return n > 0 && maxpower % n == 0 && n < 0x7FFFFFFF;
}

int main()
{
    int n;
    printf("please input an integer, exit when 1:\n");
    while(n != 1)
    {
        scanf("%d", &n);
        if(isPowerofThree(n))
        {
            printf("%d is power of 3.\n", n);
        }
        else
        {
            printf("%d is not power of 3.\n", n);
        }
        
    }
    return 0;  
}