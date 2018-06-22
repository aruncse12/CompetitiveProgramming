#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int num;
    struct Node *left, *right;
};
struct Node * newNode(int num)
{
    struct Node *temp = new Node();
    temp->num = num;
    temp->left = NULL;
    temp->right = NULL;
}
void printNodes(struct Node *temp)
{
    if(temp!=NULL)
    {
        cout<<temp->num<<endl;
        printNodes(temp->left);
        printNodes(temp->right);
    }
}
void printPath(vector <int> *path)
{
    int i;
    cout<<endl;
    for(i=0;i<path->size();i++)
        cout<<path->at(i)<<" ";
}
bool findpath(struct Node *temp, int n, vector <int> *path)
{
    if(temp == NULL)
        return false;
    path->push_back(temp->num);
    if(temp->num == n)
        return true;
    if(findpath(temp->left,n,path) || findpath(temp->right,n,path))
        return true;
    path->pop_back();
    return false;
}
int main()
{
    struct Node *root;
    int n1, n2, i, anc;
    vector <int> path1, path2;
    cin>>n1>>n2;
    root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    findpath(root, n1, &path1);
    findpath(root, n2, &path2);
    printPath(&path1);
    printPath(&path2);
    for(i=0;i<(path1.size()<path2.size()?path1.size():path2.size());i++)
    {
        if(path1[i]==path2[i])
            anc = path1[i];
    }
    cout<<endl<<"ANC "<<anc;
    cout<<endl;
    printNodes(root);
}