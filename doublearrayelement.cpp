#include<bits/stdc++.h>
using namespace std;
void dob(int *P){
    for(int i=0;i<5;i++)
    P[i]=2* P[i];

}
int main(){
    int arr[5]={1,2,3,4,5};
    dob(arr);
    for(int i=0;i<5;i++)
    cout<<arr[i];
}