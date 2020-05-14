//Secuencial Desordenado,Ordenado y bin.
//Gonzalo Ezequiel Perez Perez.

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int SecuencialDes();
int SecuencialOrd();
int Bin();

int main(){
	int op;
	cout<<"1...Secuencial Desordenado\n"<<endl;
	cout<<endl;
	cout<<"2...Secuencial Ordenado\n"<<endl;
	cout<<endl;
	cout<<"3...Binaria\n"<<endl;
	cin>>op;
	
	
	switch(op){
	do{
		case 1:
	SecuencialDes();
	break;
	
	case 2:
		cout<<endl;
    SecuencialOrd();
    break;
    
    case 3:
    	cout<<endl;
    	Bin();
    	break;
    default:
	cout<<"Opcion erronea intenta de nuevo\n";
	break;
	
    }while(op!=0);
  }

}
 

int SecuencialDes(){
	int n=0;
	int x;
	int i=1;
	
     srand(time(NULL));
	 cout<<"Ingresa el tamano del vector: "<<endl; //pide al usuario el tamaño del vector
	 cin>>n;
	 
	 int v[n]; //declaramos vec ya que tenemos nuestro tamaño n.
	 
	 cout<<"Colocando valores aleatorios dentro del vector"<<endl;
	 
	 for(i=0; i<n; i++){  //Llenamos el vector 
	 
	 	v[i] = rand()%(100+1);
	 }
	 
	 for (i=0; i<n; i++){
	 	
	 	cout<<"Posicion del Numero segun el interador:\t "<<i<<"\t"<<"["<<v[i]<<"]"<<endl;
	 	cout<<endl;
	 }
	 
	 cout<<"Ingresa el numero a buscar en el vector: "<<endl;
	 cin>>x;
	 
	 i=1;
	  while ((i <= n) && (v[i] != x)){
    	i++;
}
     if(i > n){
	     cout<<"La informacion no esta en el arreglo";
	     cout<<endl;
 }else{
	      cout<<"La informacion se encuentra en la posicion: "<<i<<endl;
}
	 
	 }
	
int SecuencialOrd(){
	int n=10;
	int v[]={1,2,3,4,5,6,7,8,9,10};
	int i;	
	int x;
	
	cout<<"Ingresa el numero a buscar en el vector: "<<endl;
	cin>>x;
	
       for (i=0; i<n; i++){
	 	
	 	cout<<"Posicion del Numero segun el interador:\t "<<i<<"\t"<<"["<<v[i]<<"]"<<endl;
	 	cout<<endl;
	 }
	 
	i=0;
	while((i <= n) && (x > v[i])) {
		i++;
	}
	if((i>n) || (x<v[i])){
		cout<<"\t La informacion no se ecuentra en el arreglo"<<endl;
	}else{
		cout<<"\t La informacion se encuentra la posicion: "<<i<<endl;
	}

}

int Bin(){
	int x;
	int n=20;
	int v[n]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int izq;
	int cen=0;
	int der;
	int i;
	
		cout<<"Ingresa el numero a buscar en el vector del 1 al 20: "<<endl;
     	cin>>x;
     	
  for (i=0; i<n; i++){
	 	cout<<"Posicion del Numero segun el interador:\t "<<i<<"\t"<<"["<<v[i]<<"]"<<endl;
	 	cout<<endl;
	 }
	 
	 izq=1;
	 der=n;
	 bool ban=false;
	 
	 while((izq <= der) && (ban == false)){
	 	cen = (izq+der)/2;
	 	if( x == v[cen]) {
	 		ban=true;
		 }else{
		 	if( x > v[cen] ){
		 		izq=cen+1;
			 }else{	
			 	der=cen-1;
			 }
		  }
	    }
	    
	    if( ban == true){
	    	cout<<"La informacion esta en la posicion"<< cen <<endl;
	    	}else{
	    		cout<<"La informacion no se encuentra en el arreglo"<<endl;
			}
		}
