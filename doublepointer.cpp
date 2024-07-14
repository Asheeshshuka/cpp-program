#include<iostream>
using namespace std;
int main(){
    int n=10;
    int*p=&n;//single pointer
    int**p1=&p;//double pointr
     int***p2=&p1;//triple pointer
     
    //value ko modify krna hai ,jo n me rakhi hai.
    **p1=**p1+5;
     cout<<n<<endl;
}