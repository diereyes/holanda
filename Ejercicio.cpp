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
 
    cout<<"Tu IMC es de :   TIENES OBESIDAD "<<imc<<endl;
}
 if(imc>25.0 || imc<30.0){
 	cout<<"Tu IMC es de :   TIENES SOBRE PESO "<<imc<<endl;
}
 if(imc<=25.0){
 
 		cout<<"Tu IMC es de :   TIENES PESO NORMAL "<<imc<<endl;
 }
    return 0;
}
