#include "binary_trees.h"


/**
 * binary_tree_insert_right -  inserts node as the right-child
 * @parent: pointer to the parent node
 * @value: new node value
 * Return: new_node or null on failure
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
