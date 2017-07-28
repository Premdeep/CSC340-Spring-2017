#include <iostream>
using namespace std;

// Node data structure in a tree
struct bstNode{
	int data;
	bstNode* left;
	bstNode* right;
};

bstNode* createNode(int data){
	// creating dynamic node
	bstNode* node = new bstNode;
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}

bstNode* insert(bstNode* head, int data){
	if(head == NULL)
		head = createNode(data);
	// data is greather than root
	else if(head->data <= data){  
		head->right = insert(head->right, data);
			}
	// data is less than or equal to root
	else{
		head->left = insert(head->left, data);
	}
	return head;
}

int main(){

	bstNode* root;
	//root = createNode(5);
	root = insert(root, 5);
	root = insert(root, 3);
	root = insert(root, 1);
	root = insert(root, 4);
	root = insert(root, 7);


	return 0;
}