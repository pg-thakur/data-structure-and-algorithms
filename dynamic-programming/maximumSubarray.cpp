//Given an integer array nums, find the contiguous subarray 
//(containing at least one number) which has the largest sum and return its sum.

//A subarray is a contiguous part of an array.

// @author: Prashant Gaurav

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    
    int x= nums[0];
    int ans= nums[0];
    for(int i=1;i<nums.size();i++)
    {
        x= max(x+nums[i], nums[i]);
        ans= max(x, ans);
    }
    cout<<ans;
    

}

