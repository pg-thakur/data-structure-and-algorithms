//Given an array of non-negative integers nums, you are initially positioned at the first index of the array.
//Each element in the array represents your maximum jump length at that position.
//Your goal is to reach the last index in the minimum number of jumps.
//You can assume that you can always reach the last index.

// author- Prashant Gaurav

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>dp(n);
    dp[n-1]=0;
    for(int i=n-2;i>=0;i--)
    {
        int x= arr[i];
        int y=INT_MAX-1;
        for(int j=1;j<=x && i+j<arr.size();j++)
        {
            y=min(y, dp[i+j]);
        }
        dp[i]=y+1;
    }
    cout<< dp[0];
}
