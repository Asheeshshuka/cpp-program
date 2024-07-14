#include<bits/stdc++.h>
using namespace std;
int main(){
     int count=0;
     int start=0,end=6;
    int arr[7]={1,2,3,4,5,6,7};
    int target;
    cin>>target;
   
    while(start<end){
        if(arr[start]+arr[end]<=target)
        {
            cout<<arr[start] <<arr[end]<<" ";
            start++,end--;
            count++;

        }
        else
        end--;
    }
    cout<<"total no of pairs will be;"<<count<<endl;
    return 0;
}