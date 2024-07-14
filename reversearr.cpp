#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[8]={1,2,4,6,2,9,12,14};
    int i=0;
    int j=7;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<8;i++)
    cout<<arr[i]<<" ";
    
}