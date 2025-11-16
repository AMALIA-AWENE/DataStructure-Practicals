#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int findHeight(Node* root) {
    if (root == nullptr) return 0;
    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);
    return max(leftHeight, rightHeight) + 1;
}

int main() {
    Node* root = new Node{1, nullptr, nullptr};
    root->left = new Node{2, nullptr, nullptr};
    root->right = new Node{3, nullptr, nullptr};
    root->left->left = new Node{4, nullptr, nullptr};
    root->left->right = new Node{5, nullptr, nullptr};

    cout << "Height of the tree: " << findHeight(root);
    return 0;
}
