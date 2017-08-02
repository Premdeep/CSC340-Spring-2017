#include <iostream>
#include <queue>
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

bstNode* insertNode(bstNode* head, int data){

	if(head == NULL)
		head = createNode(data);
	else if(data > head->data)
		head->right =  insertNode(head->right, data);
	else
		head->left =  insertNode(head->left, data);

	return head;
}

void preorder(bstNode* head){
	if(head == NULL)
		return;
	cout<<head->data<<" ";
	preorder(head->left);
	preorder(head->right);
}

void inorder(bstNode* head){
	if(head == NULL)
		return;
	inorder(head->left);
	cout<<head->data<<" ";
	inorder(head->right);
}

void postorder(bstNode* head){
	if(head == NULL)
		return;
	postorder(head->left);
	postorder(head->right);
	cout<<head->data<<" ";
}

int max(int a, int b){
	if(a > b)
		return a;
	return b;
}

int height(bstNode* head){
	if(head == NULL)
		return -1;
	return max(height(head->left), height(head->right))+1;

}

bool search(bstNode* root, int data){
	if(root == NULL)
		return false;
	if(data == root->data)
		return true;
	else if(data > root->data)
		return search(root->right, data);
	else
		return search(root->left, data);
}

void levelorder(bstNode* root){

	if(root == NULL)
		return ;
	queue<bstNode*> nodeq;
	nodeq.push(root);
	while(!nodeq.empty()){
		bstNode* temp = nodeq.front();		
		if(temp->left != NULL)
			nodeq.push(temp->left);
		if(temp->right != NULL)
			nodeq.push(temp->right);
		cout<<temp->data<<" ";
		nodeq.pop();
	}

}

int main(){

	bstNode* root;
	root = NULL;
	cout<<"root : "<<root<<endl;
	root = insertNode(root, 6);
	cout<<"root : "<<root<<endl;
	//bstNode* insertNode(bstNode* head, int data){
	root = insertNode(root, 3);
	cout<<"root : "<<root<<endl;
	root = insertNode(root, 4);
	cout<<"root : "<<root<<endl;
	root = insertNode(root, 1);
	cout<<"root : "<<root<<endl;
	root = insertNode(root, 5);
	cout<<"root : "<<root<<endl;

	cout<<"preorder : ";
	preorder(root);
	cout<<endl;
	cout<<"inorder : ";
	inorder(root);
	cout<<endl;

	cout<<"postorder :";
	postorder(root);
	cout<<endl;

	cout<<"height : "<<height(root)<<endl;

	int item = 44;

	if(search(root, item))
		cout<<item<<" found "<<endl;
	else
		cout<<item<<" not found"<<endl;

cout<<"leve order :";
levelorder(root);
cout<<endl;


	return 0;
}