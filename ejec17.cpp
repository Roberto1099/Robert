#include <iostream>

using namespace std;

int main(void) {
    int n[10];
    int i=0;
    do {
        cout << "digite el numero "<<i+1<< ": " ;cin>>n[i];
     i++;
    } while (i<10);
    int w=0, cont=0;
    do{
        cout<<endl;
        cout<<"valor " << w+1 << "sera:"<<n[w];
        cont= cont+n [w];
        w++;
        
    }
    while (w<10);
    cout<<endl;
    cout<< "la suma es : "<<cont<<endl;
    cout<< "el promedio es :" <<cont/10<<endl;
            return 0;
}
               
                

