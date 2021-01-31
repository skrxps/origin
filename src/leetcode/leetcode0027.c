int removeElement(int* nums, int numsSize, int val){
    // int i = 0, n = numsSize;

    // while(i<n)
    // {
    //     if(nums[i] == val)
    //     {
    //         nums[i] = nums[n-1];
    //         n--;
    //     }
    //     else
    //     {
    //         i++;
    //     }
    // }
    // return n;

    int n = 0;
    for(int i=0; i<numsSize; i++)
    {
        if(nums[i] != val)
        {
            nums[n++] = nums[i];
        }
    }

    return n;
}