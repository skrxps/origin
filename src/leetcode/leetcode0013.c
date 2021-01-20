#include<stdio.h>
#include<string.h>

int romanToInt(char * s){
    int res = 0;
    int len = strlen(s);
    for(int i=0; i<len; i++)
    {
        switch(s[i])
        {
            case 'I':
                if(s[i+1]=='V' || s[i+1]=='X')
                {
                    res -= 1;
                }
                else
                {
                    res += 1;
                }
                break;
            case 'V':
                res += 5;
                break;
            case 'X':
                if(s[i+1]=='L' || s[i+1]=='C')
                {
                    res -= 10;
                }
                else
                {
                    res += 10;
                }
                break;
            case 'L':
                res += 50;
                break;
            case 'C':
                if(s[i+1]=='D' || s[i+1]=='M')
                {
                    res -= 100;
                }
                else
                {
                    res += 100;
                }
                break;
            case 'D':
                res += 500;
                break;
            case 'M':
                res += 1000;
                break;
        }
    }
    return res;
}

int main()
{
    char *str = "III";
    int ans = romanToInt(str);
    printf("%d", ans);
}