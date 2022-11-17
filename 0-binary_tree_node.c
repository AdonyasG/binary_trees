#include "binary_trees.h"
/**
 * binary_tree_node- function to create a binary tree node
 * @parent: pointer to the parent node
 * @value: value to be assigned to the new node
 * Return: NULL if an a error occurs
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new != NULL)
	{
		new->parent = parent;
		new->left = NULL;
		new->right = NULL;
		new->n = value;
	}
	return (new);
}
