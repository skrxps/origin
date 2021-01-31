// URL替换空格为%20
#include<stdio.h>
#include<stdlib.h>

char* replaceSpaces(char* S, int length){
    int len = 0, j = 0;

    for(int i=0; i<length; i++)
    {
        len++;
    }
    
    //最后一个'\0'
    char *ret = (char *)calloc(length + len*2 +1, sizeof(char));
    if(!ret)
    {
        printf("malloc error.\n");
        exit(0);
    }
    
    for(int i=0; i<length; i++)
    {
        if(S[i] == ' ')
        {
            ret[j++] = '%';
            ret[j++] = '2';
            ret[j++] = '0';
        }
        else
        {
            ret[j++] = S[i];
        }
    }
    return ret;
}