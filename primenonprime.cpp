#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter a number"<<endl;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"not a prime"<<endl;
            return 0;
        }
        i++;
    }
    cout<<"prime no"<<endl;
    return 0;
}