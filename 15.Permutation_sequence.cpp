//Permutation Sequence - leetcode (acc:48%) (hard)
//Given n and k, return the kth permutation sequence.
//https://leetcode.com/problems/permutation-sequence/
class Solution {
public:
    void per(string &x, int n, vector<string>&ds, string &a,vector<int>&freq) {
        if(a.size() == n) {
            ds.push_back(a);
            return;
        }

        for(int i = 0; i < n; i++) {
            if(freq[i] == 0) {
                freq[i]=1;
                a.push_back(x[i]);
                per(x,n,ds,a,freq);

                freq[i] = 0;
                a.pop_back();
            }
        }
    }
    string getPermutation(int n, int k) {
        // vector <int> x(n);
        string x = "";
        for(int i = 0; i < n; i++){
            x[i]+=i+1;
        }
        vector <string> ds;
        string a;
        vector <int> freq(n,0);
        per(x,n, ds, a, freq);
        string h="";
        for(long long i = 0; i < n; i++){
            h+=to_string(ds[k-1][i]);
        }
        return h;
    }
};
