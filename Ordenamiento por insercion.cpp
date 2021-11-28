#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main(){
	int n;
	cout<<"ingrese la cantidad de su arreglo ";
	cin>>n;
int *p=new int[n];	
	
	for(int i=0;i<n;i++){
		
		cout<<"valor de la posicion "<<i<<": ";cin>>p[i];cout<<endl;
		
	}
	
	for(int i=0;i<n;i++){
		
		int pos=i;
		int aux=p[i];
	 
		while((pos>0) && (p[pos-1]>aux)){//no tiene sentido poner if dentro de un while, porque puedes ponerlo en el mismo while
			
			p[pos]=p[pos-1];
		pos--;
		}
		
		p[pos]=aux;
	}
		for(int i=0;i<n;i++){
		
		cout<<setw(4)<<p[i];
		
	}
	
	
	delete[] p;
	return 0;
	
}
