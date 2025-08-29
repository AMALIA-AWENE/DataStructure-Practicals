#include<iostream>
using namespace std;

int main() {
    int arr[6] = {10, 20, 30, 40, 50, 60};

    cout << "Original array:\n";
    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = 0; i <6 / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[6 - 1 - i];
        arr[6 - 1 - i] = temp;
    }

    cout << "Reversed array:\n";
    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
