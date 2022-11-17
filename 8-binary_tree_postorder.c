#include "binary_trees.h"
/**
 * binary_tree_postorder- function to treaverse a binary tree node in postorder
 * @tree: pointer to the root node
 * @func: pointer to a function
 * Return: NULL if an a error occurs
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);

}
