#include<stdio.h>

int decimaltobinary(int n)
{
    int binary = 0, i = 1;
    while(n)
    {
        binary += n % 2 * i;
        i *= 10; 
        n /= 2;
    }
    return binary;   
}

int main(int argc, char *argv[])
{
    int n;
    printf("plese input a number, exit if 1:\n");
    while(n != 1)
    {
        scanf("%d", &n);
        printf("%d transfer to binary is: %d\n", n, decimaltobinary(n));
    }
    return 0;
}