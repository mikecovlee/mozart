#include "../headers/tree.hpp"
#include <iostream>
template<typename T>
void print_tree(typename cov::tree<T>::const_iterator it)
{
	if(it.usable())
	{
		std::cout<<it.data()<<std::endl;
		print_tree<T>(it.left());
		print_tree<T>(it.right());
	}
}
int main()
{
	cov::tree<int> tree;
	tree.emplace_root_left(10);
	tree.emplace_left(tree.root(),12);
	tree.emplace_right(tree.root(),14);
	tree.emplace_left(tree.root().left(),16);
	tree.emplace_right(tree.root().right(),18);
	cov::tree<int> tree_copy=tree;
	print_tree<int>(tree_copy.root());
	return 0;
}