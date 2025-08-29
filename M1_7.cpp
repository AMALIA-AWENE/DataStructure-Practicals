#include<iostream>
using namespace std;

int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    int sum[5];

    for(int i=0;i<5;i++){
        sum[i]=arr1[i]+arr2[i];
    }

    cout<<"The element-wise addition of two 1D arrays is: ";
    for(int i=0;i<5;i++){
        cout<<sum[i]<<" ";
    }
    cout<<endl;
    return 0;
}