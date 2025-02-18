//reverse an array - gfg (easy) (acc : 55%)
//https://www.geeksforgeeks.org/problems/reverse-an-array/0
//https://takeuforward.org/data-structure/reverse-a-given-array/
/*
You are given an array of integers arr[]. Your task is to reverse the given array.
Note: Modify the array in place
*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void rev(vector <int> &arr, int start, int end) {
        if (start >= end) return;
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        rev(arr, start + 1, end - 1);
    }
    void reverseArray(vector<int> &arr) {
        rev(arr, 0, arr.size() - 1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.reverseArray(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
