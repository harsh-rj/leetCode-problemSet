//can't just exchange nums pointer with p i think
#include <stdio.h>
#include <stdlib.h>

void rotate(int *nums, int numsSize, int k)
{
    if (numsSize == 0 || numsSize == 1 || k == numsSize)
    {
        return;
    }
    else if (k > numsSize)
    {
        rotate(nums, numsSize, k % numsSize);
    }
    else
    {
        int *p = (int *)malloc(numsSize * sizeof(int));
        for (int i = 0; i < k; i++)
        {
            *(p + i) = *(nums + numsSize - k + i);
        }
        for (int i = 0; i <= numsSize - k; i++)
        {
            *(p + k + i - 1) = *(nums + i);
        }
        for (int i = 0; i < numsSize; i++)
        {
            nums[i] = p[i];
        }
        free(p);
    }
}