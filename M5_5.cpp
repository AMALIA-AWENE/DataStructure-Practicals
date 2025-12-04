#include <iostream>
using namespace std;

int main() {
    int size = 10;
    int hashTable[10];
    
    for (int i = 0; i < size; i++) hashTable[i] = -1;

    int values[] = {23, 43, 13, 27};
    int n = 4;

    for (int i = 0; i < n; i++) {
        int key = values[i];
        int index = key % size;

        while (hashTable[index] != -1) {
            index = (index + 1) % size;  
        }
        hashTable[index] = key;
    }

    cout << "Hash Table:\n";
    for (int i = 0; i < size; i++) {
        cout << i << " → " << hashTable[i] << endl;
    }
}
