/*
                Foysol Ahmed Shuvo
              Metropolitan University, Sylhet


Problem Description: Find the median of the two sorted arrays.
nums1 = [1, 3]
nums2 = [2]

The median is 2.0

Solution Idea: Guess the sum of the length of two arrays is 5.So median of array is 3'rd number index (when we merge two arrays).So our target is
how we calculate 3'rd number index without merge given arrays.
Complexity: O(n+m)

*/

class Solution
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {

        int len1  = nums1.size();
        int len2  = nums2.size();
        int total_len = len1 + len2;
        int i, j, find, find2, ans, ans2;

        if(total_len%2 == 1)
        {
            find = total_len / 2;
            find++;
            i = 0;
            j = 0;
            ans = 0;
            while(find>0)
            {
                if(i<len1 && j<len2)
                {
                    if(nums1[i] < nums2[j])
                    {
                        ans = nums1[i];
                        i++;
                    }
                    else
                    {
                        ans = nums2[j];
                        j++;
                    }
                }
                else if(i<len1)
                {
                    ans = nums1[i];
                    i++;
                }
                else
                {
                    ans = nums2[j];
                    j++;
                }
                --find;
            }
            double res = ans + 0.0;
            return(res);
        }
        else
        {
            find = total_len / 2;
            i = 0;
            j = 0;
            ans = ans2 = 0;
            while(find>0)
            {
                if(i<len1 && j<len2)
                {
                    if(nums1[i] < nums2[j])
                    {
                        ans = nums1[i];
                        i++;
                    }
                    else
                    {
                        ans = nums2[j];
                        j++;
                    }
                }
                else if(i<len1)
                {
                    ans = nums1[i];
                    i++;
                }
                else
                {
                    ans = nums2[j];
                    j++;
                }
                find--;
            }

            if(i<len1 && j<len2)
            {
                if(nums1[i] < nums2[j])
                {
                    ans2 = nums1[i];
                }
                else
                {
                    ans2 = nums2[j];
                }
            }
            else if(i<len1)
            {
                ans2 = nums1[i];
                i++;
            }
            else
            {
                ans2 = nums2[j];
                j++;
            }
            double res = (double)((ans + ans2) / 2.0);
            return(res);
        }

    }
};
