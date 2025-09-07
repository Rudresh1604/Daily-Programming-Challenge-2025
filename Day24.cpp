#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *left;
    Node *right;
    int data;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// function to build tree
Node *buildTree(vector<int> &arr)
{
    if (arr.empty() || arr[0] == -1)
    { // edge case
        return NULL;
    }
    Node *root = new Node(arr[0]);
    queue<Node *> q;
    q.push(root);
    int i = 1;
    while (!q.empty() && i < arr.size())
    {
        Node *current = q.front();
        q.pop();
        if (arr[i] != -1)
        {
            current->left = new Node(arr[i]);
            q.push(current->left);
        }
        i++;
        if (i < arr.size() && arr[i] != -1)
        {
            current->right = new Node(arr[i]);
            q.push(current->right);
        }
        i++;
    }
    return root;
}

int fun(Node *root, int p, int q)
{
    if (root == nullptr)
        return -1;
    if (root->data == p || root->data == q)
        return root->data;
    int left = fun(root->left, p, q);
    int rht = fun(root->right, p, q);

    if (left != -1 && rht != -1)
        return root->data;

    if (rht == -1)
    {
        return left;
    }
    return rht;
}

int main()
{
    // vector<int> arr = {3, 5, 1, 6, 2, 0, 8, -1, -1, 7, 4};
    vector<int> arr = {1, 2};
    Node *root = buildTree(arr);
    int p = 1;
    int q = 2;
    cout << fun(root, p, q) << endl;
    return 0;
}