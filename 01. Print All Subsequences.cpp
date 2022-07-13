

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
