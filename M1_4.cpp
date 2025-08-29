#include<iostream>
using namespace std;

int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int mini=arr[0];
    int maxi=arr[0];

    for (int i=0; i<9;i++){
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
    }

    cout<<"the maximum element is the array is "<<maxi<< " and the minimum element is "<<mini<<endl;
}