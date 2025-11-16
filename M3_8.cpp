#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    Node* head = new Node{10, nullptr, nullptr};
    Node* second = new Node{20, head, nullptr};
    head->next = second;
    Node* third = new Node{30, second, nullptr};
    second->next = third;

    display(head);
    return 0;
}
