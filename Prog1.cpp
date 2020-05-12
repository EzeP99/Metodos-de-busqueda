#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int SecuencialDes();

int main(){
	SecuencialDes();

}

int SecuencialDes(){
	int n=0;
	int x;
	int i=0;
	
	 	 srand(time(NULL)); //semilla numeros aleatorios

	 cout<<"Ingresa el tamaño del vector: "<<endl; //pide al usuario el tamaño del vector
	 cin>>n;
	 
	 int v[n]; //declaramos vec ya que tenemos nuestro tamaño n.
	 
	 cout<<"Colocando valores aleatorios dentro del vector"<<endl;
	 
	 for(i=0; i<=n-1; i++){  //Llenamos el vector 
	 
	 	v[i] = 1+rand()%(n-0);
	 }
	 
	 for (i=0; i<n;i++){
	 	
	 	cout<<"EL valor de i se le asigno"<<i<<"~"<<v[i];
	 	cout<<endl;
	 }
	  while ((i<=n) && v[i]!= 0){
    	i=i+1;
}
     if(i > n){
	     cout<<"La informacion no esta en el arreglo";
	     cout<<endl;
 }else{
	      cout<<"La informacion se encuentra en la posicion: "<<i<<endl;
}
	 
	 return 0;
	 system("PAUSE");
	 }
	





