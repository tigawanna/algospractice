#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode{
int value;
struct TreeNode *left;
struct TreeNode *right;
}TreeNode;

TreeNode *createnode(int value){
    TreeNode* result = malloc(sizeof(TreeNode));
    if(result != NULL) {
        result->left = NULL;
        result->right= NULL;
        result->value = value;
    }
    return result;
}

void printTabs(int numtab){
    for(int i = 0; i<numtab; i++){
        printf("\t");
}

}


void printTree_rec(TreeNode *root , int level){
if(root == NULL){
    printTabs(level);
    printf("empty tree");
    return;
}

printTabs(level);
printf("value === %d\n",root->value);
printTabs(level);

printf("left \n");
printTree_rec(root->left, level + 1);
printTabs(level);

printf("right \n");
printTree_rec(root->right, level + 1);
printTabs(level);


printf("done \n");
}

void printTree(TreeNode *root){
    printTree_rec(root, 0);
}

int main(int argc, char const *argv[])
{
 TreeNode *n1 = createnode(1);
 TreeNode *n2 = createnode(2);
 TreeNode *n3 = createnode(3);
 TreeNode *n4 = createnode(4);
 TreeNode *n5 = createnode(5);
 TreeNode *n6 = createnode(6);


n1->left=n2;
n1->right=n3;
n3->left=n4;
n3->right=n5;

printTree(n1);




 free(n1);
 free(n2);
 free(n3);
 free(n4);
 free(n5);
 free(n6);
 return 0;
}

