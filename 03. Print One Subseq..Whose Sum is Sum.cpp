
#include<bits/stdc++.h>
using namespace std;

int n = 3;
int sum = 2;

bool SubS(int arr[], vector<int>&ds, int i, int s)
{
    if(i>=n)
    {
         //If Condition Satisfied.
        if(sum==s) 
        {
           for(auto it:ds)
              cout<<it<<" ";
        
         return true;
        }
        // Else Condition Not Satisfied
        else return false;  
    }


    ds.push_back(arr[i]);
    if(SubS(arr,ds,i+1,s+=arr[i])==true) return true;
    ds.pop_back();
    if(SubS(arr,ds,i+1,s-=arr[i])==true) return true;

    else return false;
}
int main()
{
    int arr[]={1,2,1};
    vector<int>ds;
    SubS(arr,ds,0,0);

}


