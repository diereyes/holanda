#include <iostream>
 
using namespace std;
 
 
int main()
{
 
    int peso;
 
    float estatura,imc;
 
    cout<<"Introduce tu Peso (Kg):  ";
 
    cin>>peso;
 
    cout<<"Introduce tu Estatura  (Mts): ";
 
    cin>>estatura;
 
    imc=peso/(estatura*estatura);
    
 if (imc>=30.0){
 
    cout<<" TIENES OBESIDAD y Tu IMC es de :   "<<imc<<endl;
    return 0;
}
 if(imc>25.0 && imc<30.0){
 	cout<<"TIENES SOBRE PESO  y Tu IMC es de :   "<<imc<<endl;
 	return 0;
}
 if(imc<=25.0){
 
 		cout<<"TIENES PESO NORMAL y Tu IMC es de :    "<<imc<<endl;
	return 0;
 }
 
  
}
