#include "binary_trees.h"
#include "helper.c"
/**
 * binary_tree_balance - measures the balance factor
 * @tree: pointer to the root node
 * Return: size
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_heightt(tree->left) - binary_tree_heightt(tree->right));
}
