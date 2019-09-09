#include <iostream>
using namespace std;

int functi(int num){
    int sum=0;
    for (int i=1; i<=num; i++){
        sum=sum+i;
    }
    return sum;
}
int main () {
        int dato;
        cout<<"ingrese el dato: "; cin>>dato;
        cout<<functi(dato);
        return 0;
}