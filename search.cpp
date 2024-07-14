#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[8]={1,2,4,6,2,9,12,14};
    int index=-1;
    int x;
    cin>>x;
    for(int i=0;i<8;i++){
        if(arr[i]==x)
        index =i;
    }
cout<<index<<endl;
        
 }