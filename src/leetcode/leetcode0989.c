/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdlib.h>
#include<math.h>
int* addToArrayForm(int* A, int ASize, int K, int* returnSize){
    int * res = (int *)malloc(sizeof(int)*fmax(5, ASize+1));
    *returnSize = 0;

    for(int i=ASize-1; i>=0; --i)
    {
        int sum = A[i] + K%10;
        K /= 10;
        if(sum >= 10)
        {
            sum %= 10;
            K++;
        }
        res[(*returnSize)++] = sum;
    }
    //最后一位进位处理
    for( ; K>0; K/=10)
    {
        res[(*returnSize)++] = K%10;
    }
    //反转数组
    for(int i=0; i<(*returnSize)/2; i++)
    {
        int tmp = res[i];
        res[i] = res[(*returnSize)-1-i];
        res[(*returnSize)-1-i] = tmp;
    }

    return res;
}