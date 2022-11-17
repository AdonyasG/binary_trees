#include "binary_trees.h"
/**
 * binary_tree_insert_right- function to insert a binary tree node to the right
 * @parent: pointer to the parent node
 * @value: value to be assigned to the new node
 * Return: NULL if an a error occurs
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	temp = binary_tree_node(parent, value);
	if (temp == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		temp->right = parent->right;
		parent->right->parent = temp;
	}
	parent->right = temp;
	return (temp);
}
