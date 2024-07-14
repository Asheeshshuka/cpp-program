#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[8]={1,2,4,6,2,9,12,14};
    int ans= INT_MAX ;
    for(int i=0;i<8;i++)
    {
        if(arr[i]<ans)
        ans=arr[i];
    }
    cout<< ans<<endl;
    ans=INT_MIN;
    for(int i=0;i<8;i++){
        if(arr[i]>ans)
        ans =arr[i];

    }
    cout<<ans<<endl;
    return 0;
} 