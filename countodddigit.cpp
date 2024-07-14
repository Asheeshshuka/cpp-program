#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number"<<endl;
        cin>>n;
    int cnt=0;
    while(n!=0){
        if(n%2!=0){
        int last=n%10;
        cnt++;
        }
n=n/10;
    }
    cout<<"count odd"<< cnt<<endl;
    return 0;
}