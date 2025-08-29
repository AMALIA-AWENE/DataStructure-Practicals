#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    for(int i=0;i<10;i++){
        sum+=arr[i];
    }
    cout<<"the Sum of the element in the array is: "<<sum<<endl;

    return 0;
}