#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// 最长公共前缀
char * longestCommonPrefix(char ** strs, int strsSize){
    if(strsSize == 0)
    {
        return "";
    }
    if(strsSize == 1)
    {
        return strs[0];
    }
    int len = strlen(strs[0]);
    if(len == 0)
    {
        return "";
    }
    char *prefix = (char*)malloc(200*sizeof(char));
    for(int j=0; j<len; j++)
    {   
        int cnt = 1;
        for(int i = 1; i < strsSize; i++)
        {
            if(strs[0][j]==strs[i][j] && strs[i][j] != '\0')
            {
                cnt++;
            }
            else
            {
                prefix[j] = '\0';
                break;
            }
        }

        if(cnt == strsSize)
        {
            prefix[j] = strs[0][j];
            prefix[j+1] = '\0';
        }
        else
        {
            prefix[j] = '\0';
            break;
        }
    }
    
    return prefix;
}