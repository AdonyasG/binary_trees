#include "binary_trees.h"
/**
 * binary_tree_preorder- function to traverse a binary tree node in preorder
 * @tree: pointer to the root node
 * @func: pointer to a func
 * Return: NULL if an a error occurs
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}
