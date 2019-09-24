#ifndef MORSE_ASCII_DATA_STRUCT_H_
#define MORSE_ASCII_DATA_STRUCT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node 
{ 
	char data; 
	struct node *left; 
	struct node *right; 
	struct node *up; 
}; 

struct node* newNode(char data) 
{ 
	struct node* node = (struct node*)malloc(sizeof(struct node)); 
	node->data = data; 
	node->left = NULL; 
	node->right = NULL; 
	return(node); 
} 
struct node* data_struct(){
/*level 0*/
	struct node *root = newNode('n');
	 
	//level 1
	root->left	 = newNode('E'); 
	root->right	 = newNode('T'); 
	
	//level 2
	root->left->left = newNode('I'); 
	root->left->right = newNode('A');
	root->right->left = newNode('N');
	root->right->right = newNode('M');
	
	//level 3
	root->left->left->left = newNode('S');
	root->left->left->right = newNode('U'); 
	root->left->right->left = newNode('R');
	root->left->right->right = newNode('W');
	root->right->left->left = newNode('D');
	root->right->left->right = newNode('K');
	root->right->right->left = newNode('G');
	root->right->right->right = newNode('O');
	
	//level 4
	root->left->left->left->left = newNode('H');
	root->left->left->left->right = newNode('V');
	root->left->left->right->left = newNode('F');
	root->left->left->right->right = newNode('n'); 
	root->left->right->left->left = newNode('L');
	root->left->right->left->right = newNode('n');
	root->left->right->right->left = newNode('P');
	root->left->right->right->right = newNode('J');
	root->right->left->left->left = newNode('B');
	root->right->left->left->right = newNode('X');
	root->right->left->right->left = newNode('C');
	root->right->left->right->right = newNode('Y');
	root->right->right->left->left = newNode('Z');
	root->right->right->left->right = newNode('Q');
	root->right->right->right->left = newNode('n');
	root->right->right->right->right = newNode(' ');
	//-------
	
	return(root);
}

struct node *cur_node;

typedef struct
{
    char* morse;
    char ascii;
} morse_t;

#endif /* MORSE_ASCII_DATA_STRUCT_H_ */
