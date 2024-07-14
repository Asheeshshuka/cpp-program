#include<iostream>
using namespace std;
void incr(int *ptr){
    
}
int main(){
    int num=10;
    int *ptr=&num;
    *ptr=*ptr+1;
    incr(&num);
    cout<<num;
}