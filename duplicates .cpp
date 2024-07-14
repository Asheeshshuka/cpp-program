#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<6;i++){
        cout<<arr[i];
    }

    int i=0;
    for(int j=1;j<6;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
        }
    }
cout<<"remove duplicates in array;"<<i+1<<endl;
}