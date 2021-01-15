#include<math.h>
#include<stdio.h>

int binarytodecimal(int n)
{
    int res = 0, i = 1;
    while(n)
    {
        res += (n%2) * pow(2,i-1);
        n = n/10;
        i++;
    }
    return res;
}

int main(int argc, char *argv[])
{
    int n;
    printf("plese input a number, exit if 1:\n");
    while(n != 1)
    {
        scanf("%d", &n);
        printf("%d transfer to decimal is: %d\n", n, binarytodecimal(n));
    }
    return 0;
}