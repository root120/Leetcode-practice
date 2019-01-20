
/*
                Foysol Ahmed Shuvo
              Metropolitan University, Sylhet


Problem Description: Given an array of integers, return indices of the two numbers such that they add up to a specific target.(exactly solution must be exist)
Given nums = [2, 7, 11, 15], target = 9,

Explanation: Because nums[0] + nums[1] = 2 + 7 = 9, return [0, 1].

Solution Idea: You fix a index first like i. than search all element except i . just check for which element j, add a[i]+a[j] is equal to target.
Complexity: O(n^2)

Note: I have a O(n) solution for this problem. (using map)
*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int a, b;
        for(int i= 0; i<nums.size(); i++) {

            for(int j = i+1; j<nums.size(); j++) {

                if(nums[i] + nums[j] == target) {
                   a = i;
                    b = j;
                }
            }
        }

        return {a, b};
    }
};
