#include<iostream>
using namespace std;
int main(){
    int arr[10] ,i,n,max,min;
    cout<<"enter the size of arry"<<endl;
    cin>>n;
    cout<<"enter the element of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
        min=arr[0];

    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        min=arr[i];
    }
     cout << "Largest element : " << max;
    cout << "Smallest element : " << min;
    return 0;
    }

}
 