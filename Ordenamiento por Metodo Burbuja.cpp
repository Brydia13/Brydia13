//Metodo Burbuja

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int num[8] = {4,21,56,-4,456,98,76,76};
	int i,j,aux;
	int in=0,c=0;
	
	for(i=0;i<8;i++){
		for(j=0;j<7;j++){
			if(num[j]>num[j+1]){
				aux=num[j+1];
				num[j+1]=num[j];
				num[j]=aux;
				in=in+1;	
			}
			else{
				c=c+1;	
			}
		}	
	}
	
	cout<<"Orden Ascendente: ";
	for(int i=0;i<=7;i++){
		printf("%d\t",num[i]);
	}
	cout<<"\nNumero de comparaciones:"<<c+in;
	cout<<"\nNumero de Intercambios:"<<in;
	

	getch();
	return 0;
}
