//permutation - leetcode(acc: 79%) (medium)
https://leetcode.com/problems/permutations/
class Solution {
public:
    void per(vector<int>&nums, vector<vector<int>>&ans,int n, vector<int>&freq,vector<int> &a) {
        if(a.size() == n) {
            ans.push_back(a);
            return;
        }
        for(int i = 0; i < n; i++) {
            if(freq[i] == 0) {
                freq[i] = 1;
                a.push_back(nums[i]);
                per(nums,ans,n,freq,a);
                freq[i] = 0;
                a.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> a;
        vector <int> freq(n,0);
        per(nums,ans,n,freq,a);
        return ans;
    }
};
