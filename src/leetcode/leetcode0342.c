#include<stdbool.h>
#include<stdio.h>

bool isPowerOfFour(int n)
{
    // first check n is power of 2 or not by n&(n-1) == 0
    // then check n & 0x55555555 is n, 0x55555555 all the even bits are 1 and odd bits are 0
    // printf("%d", n&0x55555555);
    return n>0 && (n&(n-1))==0 && (n&0x55555555) == n;
}


int main()
{
    int n;
    printf("please input an integer, exit when 1:\n");
    while(n != 1)
    {
        scanf("%d", &n);
        if(isPowerOfFour(n))
        {
            printf("%d is power of 4.\n", n);
        }
        else
        {
            printf("%d is not power of 4.\n", n);
        }
        
    }
    return 0;  
}