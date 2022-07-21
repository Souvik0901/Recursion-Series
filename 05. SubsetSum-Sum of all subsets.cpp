

#include<bits/stdc++.h>
using namespace std;
void Func(int index, int sum, vector<int>&arr, int n, vector<int>&storeds)
{
    if(index==n)
    {
        storeds.push_back(sum);
        return;
    }
    //Pick
    Func(index+1,sum+arr[index], arr, n, storeds);
    //Not Pick
    Func(index+1, sum, arr, n, storeds);
}

int main()
{
    int n=3;
    vector<int>arr={3,2,1};
    vector<int>storeds;
   
    Func(0,0,arr,n,storeds);
    sort(storeds.begin(),storeds.end());
    for(auto it: storeds)
      cout<<it <<" ";


}
