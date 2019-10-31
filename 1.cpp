#include <iostream>
#include <cmath>

int main(void)
{
	std::cout<<"Ingrese el radio del círculo"<<std::endl;
	int N;
	std::cin<<N;
	std::cout<<"El diámetro del círculo es\n"<<diametro(N)<<std::endl;
	std::cout<<"El perímetro del círculo es\n"<<perimetro(N)<<std::endl;
	std:.cout<<"El área del círculo es\n"<<area(N)<<std::endl;



double diametro(int x)
{
	return x*2;
}
double perimetro(int x)
{
	return 2*x*M_PI;
}
double area(int x)
{
	return  M_PI*(x*x);
}

return 0;
}

