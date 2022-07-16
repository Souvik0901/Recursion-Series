

#include<bits/stdc++.h>
using namespace std;
int n = 3;
int sum = 2;

int SubS(int arr[], vector<int>&ds, int i, int s)
{
    if(i>=n)
    {
        if(sum==s)
        {
            return 1;
        }
        return 0;
    }
    ds.push_back(arr[i]);
    int l =SubS(arr,ds,i+1,s+=arr[i]);
    ds.pop_back();
    int r= SubS(arr,ds,i+1,s-=arr[i]);

    return l+r;


}
int main()
{
  int arr[]={1,2,1};
  vector<int>ds;
  cout<<SubS(arr,ds,0,0);
}
