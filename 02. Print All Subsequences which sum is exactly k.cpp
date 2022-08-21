

#include<bits/stdc++.h>
using namespace std;
 int sum = 2;  //Global Variable
 int n = 3;

void SubSeqFunc(int arr[], vector<int>&ds, int i , int s)
{
    if(i>=n)
    {
        if(s==sum)
        {
            for(auto x:ds)
                cout<<x<<" ";
    
            cout<<endl;    
        }
        return;
    }

    ds.push_back(arr[i]);
    SubSeqFunc(arr,ds,i+1,s+=arr[i]); // Take or pick the particular index into the subsequences
    ds.pop_back();
    SubSeqFunc(arr,ds,i+1,s-=arr[i]);// Not take or not pick

}



int main()
{
   int arr[]={1,2,1};
   vector<int>ds;
   SubSeqFunc(arr,ds,0,0);
}


-------------------------------------------------------------------------------------------------------------------------------------------
Approach : 2 (GFG)
 #Time Limit Exsisted
 

class Solution{

   public:
    void subsetsum(int arr[],int n, vector<int>&ds, vector<vector<int>>&ans, int i, int sum, int s)
    {
        if(i == n)
        {
            if(sum==s)
            {
                ans.push_back(ds);
            
            }
            return;
            
        }
        ds.push_back(arr[i]);
        subsetsum(arr,n,ds,ans,i+1,sum, s+=arr[i]);
        ds.pop_back();
        subsetsum(arr,n,ds,ans,i+1,sum, s-=arr[i]);
        
    }
    
	public:
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<vector<int>>ans;
        vector<int>ds;
        int index=0;
        int s=0;
        subsetsum(arr,n,ds,ans,index,sum, s);
        
        return ans.size();
        
	}
	
	  
};

