#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));;
}

size_t binary_tree_height(const binary_tree_t *tree)

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */

{

	size_t l_height, r_height;


	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	return ((left_height > right_height) ? left_height + 1 : right_height + 1);
}