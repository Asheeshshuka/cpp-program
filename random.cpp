#include<iostream>
using namespace std;
int twosum(int arr[],int target,int n){
       for(int i=0;i<n;i++){
       if(arr[i]+arr[i+1]==target){
           return i;
       }
   }
   return -1;
}

int main(){
  int arr[]={7,2,7,5,3};
  int target=9;
  int ans=twosum(arr,target,5);

    cout<<ans<<endl;
}
 