#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data)
{
    struct node *node=(struct node*)malloc(sizeof(struct node));

    node->data=data;
    node->left=NULL;
    node->right=NULL;

    return (node);
};

void PrintPostOrder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }

    PrintPostOrder(root->left);

    PrintPostOrder(root->right);

    printf("%d ",root->data);
}

void PrintInOrder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }

    PrintInOrder(root->left);

    printf("%d ",root->data);

    PrintInOrder(root->right);
}

void PrintPreOrder(struct node *root)
{
    if(root == NULL)
    {
        return;
    }

    printf("%d ",root->data);

    PrintPreOrder(root->left);

    PrintPreOrder(root->right);
}

int main()
{
    struct node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);

    printf("PreOrder:");
    PrintPreOrder(root);

    printf("\nInOrder:");
    PrintInOrder(root);

    printf("\nPostOrder:");
    PrintPostOrder(root);
}

