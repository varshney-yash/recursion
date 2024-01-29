#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int height(Node* root){
    // IBH useful in trees and ll
    if(root == nullptr)
        return 0; 
    int lft = height(root->left);
    int rght = height(root->right);
    return 1 + max(lft,rght);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    int treeHeight = height(root);
    cout<<"Height of the tree: "<<treeHeight;

    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
