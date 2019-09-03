#include <iostream>
using namespace std;
  
struct Complejo {
   int real;
   int imaginario;
};
   
int main() {
   Complejo c1, c2, sum;
   
   cout << "Ingresar valor de A y B  donde A + iB es el primer numero complejo\n";
   cin >> c1.real >> c1.imaginario;
     
   cout << "Ingresar valor de  A and B  donde A + iB es el segundo numero complejo\n";
   cin >> c2.real >> c2.imaginario;
     

   sum.real = c1.real + c2.real;
   sum.imaginario = c1.imaginario + c2.imaginario;
      
   if(sum.imaginario >= 0 )
      cout << sum.real << " + " << sum.imaginario<<"i";
   else
      cout << sum.real << " - " << sum.imaginario<<"i";
     
   return 0;
}
