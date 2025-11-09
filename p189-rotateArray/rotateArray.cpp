//will not work if n-k < k :( --> i have added two cases but still doesn't work
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    int n = nums.size(), endMove = 1;
    if (k > n)
    {
        rotate(nums, k % n);
        return;
    }
    int i, j;
    if ((n == 1) || (k == 0) || (k == n))
    {
        return;
    }
    else
    {
        if (n % k == 0) endMove = 0;
        if (n-k > k) {
            j = n - k;
            while (true)
            {
                i = j - k;
                for (int index = 0; index < k; index++)
                {
                    swap(nums.at(i + index), nums.at(j + index));
                }
                j -= k;
                if (j == 0)
                    break;
                if ((j == 1) && (k != 1))
                    break;
            }
            if (endMove)
            {
                for (int index = 0; index < k; index++)
                {
                    swap(nums.at(index), nums.at(index + 1));
                }
            }
        }
        else {
            k = n-k;
            j = 0;
            while (true)
            {
                i = j + k;
                for (int index = 0; index < k; index++)
                {
                    swap(nums.at(i + index), nums.at(j + index));
                }
                j += k;
                if (j == (n-k))
                    break;
                if ((j == (n-k-1)) && (k != 1))
                    break;
            }
            if (endMove)
            {
                for (int index = 0; index < k; index++)
                {
                    swap(nums.at(n - 1 -index), nums.at(n - 1 - index - 1));
                }
            }

        }
    }
}