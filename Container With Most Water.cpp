/*
                Foysol Ahmed Shuvo
              Metropolitan University, Sylhet


Problem Description: Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.
Input: [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: consider index number 2 and last index from given array.

Solution Idea: Just You take a value form given array. than check each elemnet calculate the current value. than max collect max from all value. 
Complexity: O(n^2)

Note: I have a O(n) solution for this problem. (using stack)
*/



class Solution {
public:
    int maxArea(vector<int>& height) {

        int i, len, j, ans = 0;
        len = height.size();

        for(i=0; i<len; i++) {
            for(j=i+1; j<len; j++) {
                int mn = min(height[i], height[j]);
                ans = max(ans, ((j-i)*mn));
            }
        }
        return(ans);
    }
};
