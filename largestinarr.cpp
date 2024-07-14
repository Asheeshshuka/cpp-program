#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[7]={1,2,3,4,8,6,7};
    int largest=arr[0];
    for(int i=0;i<6;i++){
        if(arr[i]>largest){
            largest=arr[i];


        }
    }
    cout<<"largest element is"<<largest <<endl;
}