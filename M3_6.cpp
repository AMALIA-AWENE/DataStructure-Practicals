#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

bool search(Node* head, int key) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == key) return true;
        temp = temp->next;
    }
    return false;
}

int main() {
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};

    int key = 20;
    if (search(head, key))
        cout << key << " found in the list";
    else
        cout << key << " not found in the list";

    return 0;
}
