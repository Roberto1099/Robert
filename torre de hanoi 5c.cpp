# include <iostream>

using namespace::std;



void Mover_Torres(int N, int Origen, int Intermedio, int Destino)

{ 

if ( N > 1 )

{ // Abre if
Mover_Torres( N - 1, Origen, Destino, Intermedio);


cout <<"\nMueve el disco " <<  N  << " de " << Origen << " a " <<  Destino << endl;
Mover_Torres( N - 1, Intermedio, Origen, Destino);
} 


if ( 1 == N )
cout << "\nMueve el disco 1 de " << Origen << " a " << Destino << endl;

} 

int main()

{ 
int Discos;
cout << "\nEste programa resuelve el problema clasico de las Torres de Hanoi";
cout <<" mediante la recursion." << endl;
cout << "\nPor favor introduzca el numero de discos que quiere mover ";
cout << " de la pila 1 a la pila 3" << endl;
cin >> Discos;

Mover_Torres( Discos, 1, 2, 3);

cout << endl << endl;

return 0;

} 