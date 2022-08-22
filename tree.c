#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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


bool insertnumber(TreeNode **rootptr, int value){
TreeNode *root = *rootptr;
if(root == NULL){
    (*rootptr) = createnode(value);
    return true;
}

if(value == root->value){
   return false;
}
if(value<root->value){
   return insertnumber(&(root->left),value);
}
else{
   return insertnumber(&(root->right), value);
}
}


bool findNumber(TreeNode *root,int value){
if (root == NULL) return false;
if (root->value == value) return true;

if(value<root->value){
    return findNumber(root->left,value);
}else{
    return findNumber(root->right, value);
}
}

int main(int argc, char const *argv[])
{
TreeNode *root= NULL;
insertnumber(&root, 15);
    insertnumber(&root, 12);
        insertnumber(&root, 1);
            insertnumber(&root, 3);
                insertnumber(&root, 30);
                    insertnumber(&root, 165);
printTree(root);
printf("boolean return afetr search for the item\n");
printf("%d",findNumber(root,1578));
                        return 0;
}

