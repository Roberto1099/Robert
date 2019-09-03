#include <iostream>

using namespace std;

int main(void){
	int m[5][5];
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			m[i][j]=0;
		}
	}

	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(i<j || i==j){
				cout<<"Ingrese el valor de la celda "<<i+1<<", "<<j+1<<endl;
				cin>>m[i][j];
		    }
		}
	}
	cout<<endl;
		for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<"| \t"<<m[i][j];
		}
		cout<<"|";

