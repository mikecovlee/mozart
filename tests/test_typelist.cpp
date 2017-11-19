#include "../mozart/typelist.hpp"
template<typename T>struct is_pointer {
	static constexpr bool value=false;
};
template<typename T>struct is_pointer<T*> {
	static constexpr bool value=true;
};

int main()
{
	using A=typename cov::type_list::make<void>::result;
	cov::type_list::iterator<A>::show();
	printf("\n");

	using B=typename cov::type_list::change_type<0,A,int>::result;
	cov::type_list::iterator<B>::show();
	printf("\n");

	typename cov::type_list::get_type<0,B>::result i {10};
	printf("%d\n",i);

	using C=typename cov::type_list::push_front<A,int>::result;
	cov::type_list::iterator<C>::show();
	printf("\n");

	using D=typename cov::type_list::pop_front<C>::result;
	cov::type_list::iterator<D>::show();
	printf("\n");

	using E=typename cov::type_list::push_back<C,double>::result;
	cov::type_list::iterator<E>::show();
	printf("\n");

	using F=typename cov::type_list::pop_back<E>::result;
	cov::type_list::iterator<F>::show();
	printf("\n");

	using G=typename cov::type_list::insert<1,E,float>::result;
	cov::type_list::iterator<G>::show();
	printf("\n");

	using H=typename cov::type_list::erase<1,G>::result;
	cov::type_list::iterator<H>::show();
	printf("\n");

	using I=typename cov::type_list::make<void,const char*,void,void,bool,void,void,void,B,void>::result;
	cov::type_list::iterator<I>::show();
	printf("\n");

	using J=typename cov::type_list::remove<I,void>::result;
	cov::type_list::iterator<J>::show();
	printf("\n");

	using K=typename cov::type_list::make<void*,int*,float,double**,const char*>::result;
	cov::type_list::iterator<K>::show();
	printf("\n");

	using L=typename cov::type_list::remove_if<K,is_pointer>::result;
	cov::type_list::iterator<L>::show();
	printf("\n");

	return 0;
}