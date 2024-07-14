#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"enter a number"<<endl;
        cin>>n;
    int sum=0;
    while(n!=0){
        int last=n%10;
        sum=sum+last*last;
        n=n/10;
    }
    cout<<"sum is"<< sum<<endl;
    return 0;
}