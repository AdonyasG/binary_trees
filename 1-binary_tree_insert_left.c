#include "binary_trees.h"
/**
 * binary_tree_insert_left- function to insert a binary tree node to the left
 * @parent: pointer to the parent node
 * @value: value to be assigned to the new node
 * Return: NULL if an a error occurs
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = binary_tree_node(parent, value);

	if (parent == NULL)
		return (NULL);
	if (temp == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		temp->left = parent->left;
		parent->left->parent = temp;
	}
	parent->left = temp;
	return (temp);
}
