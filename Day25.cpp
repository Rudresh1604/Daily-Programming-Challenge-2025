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
    {
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

bool chk(Node *root, int mini, int maxi)
{
    if (root == NULL)
        return true;
    if (root->data >= maxi || root->data <= mini)
    {
        return false;
    }
    return chk(root->left, mini, root->data) && chk(root->right, root->data, maxi);
}
bool isBST(Node *root)
{
    return chk(root, INT_MIN, INT_MAX);
}
int main()
{
    vector<int> arr = {10, 5, 15, -1, -1, 6, 20};
    Node *root = buildTree(arr);

    cout << isBST(root) << endl;
}