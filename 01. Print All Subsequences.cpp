
Approach 1:   LeetCode 
             Time Complexity: 0((2^N)*N)
             Space Complexity: 0((2^N)*N)
                 

class Solution {
    
private:
void subset(int index, vector<int>&nums, vector<int>&ds, vector<vector<int>>&ans)
{

    if(index==nums.size())
    {
        ans.push_back(ds); 
        return;
    }

    subset(index+1, nums, ds, ans);
    ds.push_back(nums[index]);
    subset(index+1, nums, ds, ans);
    ds.pop_back();
}
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        vector<int>ds;
        int index =0;
        subset(index,nums,ds,ans);
        
        return ans;
    }

};




Approach 2:

#include<bits/stdc++.h>
using namespace std;


void SubSF(int index, int n, vector<int>&ds, int arr[])
{
    if(index>=n)
    { 
        for(auto it: ds)
          cout<<it<<" ";
        
        if(ds.size()==0)
         cout<<"{}";
    
        cout<<endl;
        return;
    }
     ds.push_back(arr[index]);
    SubSF(index+1,n,ds,arr);  // Take contdition
     ds.pop_back();
    SubSF(index+1,n,ds,arr);  //Not take or not pick

}


int main()
{
    int arr[]={3,2,1};
    int n =3;
    vector<int>ds;
    SubSF(0,n,ds,arr);

}
