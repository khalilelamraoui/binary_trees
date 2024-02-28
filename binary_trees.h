#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include<stdio.h>
#include<stdlib.h>

/**
* struct binary_tree_s - Binary tree node
*
* @n: Integer stored in the node
* @parent: Pointer to the parent node
* @left: Pointer to the left child node
* @right: Pointer to the right child node
*/
struct binary_tree_s
{
	int n;

	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

typedef struct binary_tree_s bst_t;

typedef struct binary_tree_s avl_t;

typedef struct binary_tree_s heap_t;

void binary_tree_print(const binary_tree_t *);

/* Function Prototypes */
/*
* binary_tree_node - creates a binary tree node
* @parent: pointer to the parent node of the node to create
* @value: value to put in the new node
* Return: pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: pointer to the node to insert the left-child in
* @value: value to store in the new node
* Return: pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/**
* binary_tree_insert_right - inserts a node as the right-child of another node
* @parent: pointer to the node to insert the right-child in
* @value: value to store in the new node
* Return: pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/**
* binary_tree_delete - deletes an entire binary tree
* @tree: pointer to the root node of the tree to delete
* Return: void
*/
void binary_tree_delete(binary_tree_t *tree);

/**
* binary_tree_is_leaf - checks if a node is a leaf
* @node: pointer to the node to check
* Return: 1 if node is a leaf, otherwise 0
*/
int binary_tree_is_leaf(const binary_tree_t *node);

/**
* binary_tree_is_root - checks if a node is a root
* @node: pointer to the node to check
* Return: 1 if node is a root, otherwise 0
*/
int binary_tree_is_root(const binary_tree_t *node);

/**
* binary_tree_preorder - goes through a binary tree using pre-order traversal
* @tree: pointer to the root node of the tree to traverse
* @func: pointer to a function to call for each node
* Return: void
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/**
* binary_tree_inorder - goes through a binary tree using in-order traversal
* @tree: pointer to the root node of the tree to traverse
* @func: pointer to a function to call for each node
* Return: void
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/**
* binary_tree_postorder - goes through a binary tree using post-order traversal
* @tree: pointer to the root node of the tree to traverse
* @func: pointer to a function to call for each node
* Return: void
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
* Return: height of the tree, or 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree);

/**
* binary_tree_depth - measures the depth of a node in a binary tree
* @tree: pointer to the node to measure the depth
* Return: depth of the tree, or 0 if tree is NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree);

/**
* binary_tree_size - measures the size of a binary tree
* @tree: pointer to the root node of the tree to measure the size
* Return: size of the tree, or 0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree);

/**
* binary_tree_leaves - counts the leaves in a binary tree
* @tree: pointer to the root node of the tree to count the number of leaves
* Return: number of leaves in the tree, or 0 if tree is NULL
*/
size_t binary_tree_leaves(const binary_tree_t *tree);

/**
* binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
* @tree: pointer to the root node of the tree to count the number of nodes
* Return: number of nodes in the tree, or 0 if tree is NULL
*/
size_t binary_tree_nodes(const binary_tree_t *tree);

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root node of the tree to measure the balance factor
* Return: balance factor of the tree, or 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree);

/**
* binary_tree_is_full - checks if a binary tree is full
* @tree: pointer to the root node of the tree to check
* Return: 1 if full, 0 if not or if tree is NULL
*/
int binary_tree_is_full(const binary_tree_t *tree);

/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: pointer to the root node of the tree to check
* Return: 1 if perfect, 0 if not or if tree is NULL
*/
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
* binary_tree_sibling - finds the sibling of a node
* @node: pointer to the node to find the sibling
* Return: pointer to the sibling node, or NULL if node has no sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/**
* binary_tree_uncle - finds the uncle of a node
* @node: pointer to the node to find the uncle
* Return: pointer to the uncle node, or NULL if node has no uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/**
* binary_trees_ancestor - finds the lowest common ancestor of two nodes
* @first: pointer to the first node
* @second: pointer to the second node
* Return: pointer to the lowest common ancestor node of the two given nodes
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second);

/**
* binary_tree_levelorder - goes through a binary tree
* using level-order traversal
* @tree: pointer to the root node of the tree to traverse
* @func: pointer to a function to call for each node
* Return: void
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

/**
* binary_tree_is_complete - checks if a binary tree is complete
* @tree: pointer to the root node of the tree to check
* Return: 1 if complete, 0 if not
*/
int binary_tree_is_complete(const binary_tree_t *tree);

/**
* binary_tree_rotate_left - performs a left-rotation on a binary tree
* @tree: pointer to the root node of the tree to rotate
* Return: pointer to the new root node of the tree once rotated
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);

/**
* binary_tree_rotate_right - performs a right-rotation on a binary tree
* @tree: pointer to the root node of the tree to rotate
* Return: pointer to the new root node of the tree once rotated
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

#endif /* _BINARY_TREES_H_ */
