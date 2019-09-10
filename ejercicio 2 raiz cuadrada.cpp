#include <iostream>
using namespace std;
 
double raiz(double n, double r, double error);
double absolute(double a);
 
double n, r, error;
double semilla;
double a;
int count = 0;
 
int main()
{
	cout << "Ingrese un numero para meter a la raiz: ";
	cin >> n;
	cout << "Ingrese valor de la semilla: ";
	cin >> r;

	raiz(n, r, error);
	cout << "The square root of " << n << " is " << semilla << " despues " << count << " veces tratas" << endl;
 
	return 0;
}
 
double raiz(double n, double r, double error)
{
	semilla = 0;
	while (absolute(semilla - r) > error)
	{
		semilla = r;
		r = (r + n / r) / 2;
		count++; 
	} 
	return 0;
}
 
double absolute(double a)
{
	if(a < 0)
	{
		return -a;
	}
	else 
	{
		return a;
	}
}
