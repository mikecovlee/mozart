#include "../headers/tree.hpp"
#include <iostream>
class foo
{
	int mVal=0;
	public:
	foo(){
		std::cout<<__func__<<std::endl;
	}
	foo(int val):mVal(val){
		std::cout<<__func__<<std::endl;
	}
	foo(const foo& obj):mVal(obj.mVal){
		std::cout<<__func__<<std::endl;
	}
	~foo(){
		std::cout<<__func__<<std::endl;
	}
	int data() const{
		return mVal;
	}
};
void print_tree(typename cov::tree<foo>::const_iterator it)
{
	if(it.usable())
	{
		std::cout<<it.data().data()<<std::endl;
		print_tree(it.left());
		print_tree(it.right());
	}
}
int main()
{
	cov::tree<foo> tree;
	tree.emplace_root_left(10);
	tree.emplace_left_left(tree.root(),12);
	tree.emplace_right_right(tree.root(),14);
	tree.emplace_left_left(tree.root().left(),16);
	tree.emplace_right_right(tree.root().right(),18);
	tree.emplace_root_left(tree.root().left(),20);
	print_tree(tree.root());
	cov::tree<foo> tree_copy=tree;
	tree_copy.remove_right(tree_copy.root());
	print_tree(tree_copy.root());
	return 0;
}