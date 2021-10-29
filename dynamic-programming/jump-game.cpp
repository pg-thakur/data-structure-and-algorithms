//You are given an integer array nums. You are initially positioned at the array's first index, 
//and each element in the array represents your maximum jump length at that position.
//Return true if you can reach the last index, or false otherwise.


// author- Prashant Gaurav

#include<bits/stdc++.h>
using namespace std;


bool countJumps(vector<int>&nums)
{
    if(nums.size()==1)
        return true;
    int x= nums[0];
    int i;
    for(i=0;i<nums.size()-1;i++)
    {
        if(nums[i]==0 and x<=i )
            return false;
        x= max(x, i+nums[i]);
    }
    
    x= max(x, nums[i]+i);
    
    if(x >= nums.size()-1  )
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin>>n;
    vector<int>array(n);
    for(int i=0;i<n;i++)
        cin>>array[i];
    
    bool ans =  countJumps(array);
    if(ans)
        cout<<"true";
    else
        cout<<"false";
    

}


