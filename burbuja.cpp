#include<iostream>
#include<conio.h>


using namespace std;
int main(){
	int numeros [] ={4,1,2,3,5};
	int a,b,aux;
	
	for(a=0;a<5;a++){
		
		for (b=0;b<5;b++){
			
			if(numeros[b] > numeros[b+1]){
				
				aux=numeros[b];
				numeros[b]=numeros[b+1];
				numeros[b+1]=aux;
				
			}
			
		}
	}
	 
	 cout<<"Orden ascendente: ";
	 
	for (a=0;a<5;a++){
		cout<<numeros[a];
	}
	
	getch();
	return 0;
}
