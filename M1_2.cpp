#include<iostream>
using namespace std;

int main(){
    int arr[10];
    cout <<"please enter ten element: "<<endl;

    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<endl;

    cout <<"The ten element you entered are: "<<endl;
    for(int i=0;i<=9;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    return 0;
    
}