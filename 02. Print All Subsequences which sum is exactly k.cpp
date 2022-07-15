

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
