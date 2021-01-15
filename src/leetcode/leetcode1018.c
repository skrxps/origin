// 可被5整除的二级制前缀

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>

bool* prefixesDivBy5(int* A, int ASize, int* returnSize)
{
    int prefix = 0;
    *returnSize = ASize; 
    bool *res;
    *res = malloc(sizeof(bool)*ASize);
    for(int i = 0; i < ASize; i++)
    {
        //取余解决prefix过大超界问题
        prefix = ((prefix << 1) + A[i])%5;
        res[i] = prefix == 0 ? true : false;
    }
    return res;
}