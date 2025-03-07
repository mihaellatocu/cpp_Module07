#include "whatever.hpp"

int main()
{
	int a = 3;
	int b = 2;
	::swap(a, b);
	std::cout <<"Min(a, b) "<< ::min(a, b) << std::endl;
	std::cout <<"Max(a, b) "<< ::max(a, b) << std::endl;
	std::cout << "a = " << a << " b = " << b<< std::endl;

	std::string c = "chaine1"; 
	std::string d = "chaine2"; 
	::swap(c, d); 
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return(0);
}