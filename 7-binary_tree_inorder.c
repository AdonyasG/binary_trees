#include "binary_trees.h"
/**
 * binary_tree_inorder- function to traverse a binary tree node inorder
 * @tree: pointer to the root node
 * @func: pointer to a func
 * Return: NULL if an a error occurs
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);

}
