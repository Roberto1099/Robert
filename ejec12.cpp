#include <iostream>
#include <math.h>
 
using namespace std;
 
int reverseNumber(int num);
 
int main()
{
    int num, reverse;
 
    cout<<"Ingresar numero: ";
    cin>>num;

    reverse = reverseNumber(num);
 
    cout<<"Numero reverso "<<num <<" es: "<<reverse;
 
    return 0;
}
 

 
int reverseNumber(int num)
{
   
    int digit = (int) log10(num);
 

    if(num == 0)
        return 0;
 
    return ((num%10 * pow(10, digit)) + reverseNumber(num/10));
}
