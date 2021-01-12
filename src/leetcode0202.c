#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isHappy(int n)
{
    int flag = 0, sqrs = 0;
    while(!(flag == 4 || flag == 1))
    {
        sqrs += pow(n%10, 2);
        n /= 10;
        if(n == 0)
        {   
            flag = sqrs;
            if(sqrs != 1 || sqrs != 4)
            {
                n = sqrs;
                sqrs = 0;
            }
        }
    }
    return flag == 1 ? true : false;
}

int main(int argc, int **argv)
{
    int n;
    printf("please enter int one by one, exit with 1:\n");
    while(n!=1)
    {
        scanf("%d", &n);
        if(n<0)
        {
            printf("please enter numer greater than 0.\n");
        }
        else
        {
            if(isHappy(n))
            {
                printf("%d is a happy number!\n", n);
            }
            else
            {
                printf("%d is not a happy number!\n", n);
            }
        }
    }
    return 0;
}