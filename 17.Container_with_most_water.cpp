//Container With Most Water - leetcode (acc: 56.6%) (medium)
/*
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.
Notice that you may not slant the container.
*/
//https://leetcode.com/problems/container-with-most-water/description/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int area = 0;
        int i = 0;
        int j = n - 1;
        while(i < j) {
            if(area < (min(height[i],height[j]) * (j-i))){
                area = min(height[i],height[j]) * (j-i);
            }
            if (height[i] < height[j]) {
                i++;
            }
            if(area < (min(height[i],height[j]) * (j-i))){
                area = min(height[i],height[j]) * (j-i);
            }
            if(height[j] <= height[i]) {
                j--;
            }
            if(area < (min(height[i],height[j]) * (j-i))){
                area = min(height[i],height[j]) * (j-i);
            }
            if(abs(i-j) == 1) break;

            // if(area < (min(height[i],height[j]) * (j-i))){
            //     area = min(height[i],height[j]) * (j-i);
            // }
            // if (height[i] < height[i+1]) {
            //     i++;
            //     if(area < (min(height[i],height[j]) * (j-i))){
            //         area = min(height[i],height[j]) * (j-i);
            //     }
            //     continue;
            // }
            // if (height[j] < height[j-1]) {
            //     j--;
            //     if(area < (min(height[i],height[j]) * (j-i))){
            //         area = min(height[i],height[j]) * (j-i);
            //     }
            //     continue;
            // }
            // i++;
            // j--;
        }
        return area;
        // int n = height.size();
        // int area = 0;
        // int i = 0;
        // int j = n-1;
        // if(n == 2) return min(height[0],height[1]) * 1;
        // while(i < j) {
        //     if(area < (min(height[i],height[j]) * (j-i))){
        //         area = min(height[i],height[j]) * (j-i);
        //         cout << area<< endl;
        //     }
        //     if(height[i] < height[i+1]) {
        //         i++;
        //     }
        //     if(height[i] < height[j]) {
        //         if(area < (min(height[i],height[j]) * (j-i))){
        //             area = min(height[i],height[j]) * (j-i);
        //         }
        //         cout << area <<endl;
        //     }
        //     if(height[j] < height[j-1]) {
        //         j--;
        //     }
        //     if(area < (min(height[i],height[j]) * (j-i))){
        //         area = min(height[i],height[j]) * (j-i);
        //         cout << area <<endl;
        //     }
        //     i++;
        //     j--;
        //     cout << endl;
        // }
        // return area; 
    }
};
