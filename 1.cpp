#include <iostream>
#include <cmath>

int main()
{
	int  x, y, z;
	std::cout<<"Ingrese el primer lado:\n"<<std::endl; std::cin>>x;
	std::cout<<"Ingrese el segundo lado:\n"<<std::endl; std::cin>>y;
	std::cout<<"Ingrese el tercer lado:\n"<<std::endl; std::cin>>z;

	if (x*x + y*y == z*z)
{
	std::cout<<"\nEl triángulo es rectángulo\n"<<std::endl;
}
	else if( x*x + y*y != z*z)
{
	std::cout<<"\nEl triángulo no es rectángulo\n"<<std::endl;
}

} 
