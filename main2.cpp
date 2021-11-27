#include <iostream>
using namespace std; 
int main() { 
int num1=0; 
int num2=0; 
int resultado=0; 
// agrege enl para agregar un enter entre lineas
cout<<"Digite un numero" <<endl; 
cin>>num1; 
cout<<" Digite un numero" <<endl; 
//Faltaba un ; en la linea 11
cin>>num2;
resultado=num1*num2; 
cout<<" El producto de los números "<<resultado <<endl; 
resultado=num1+num2; 
cout<<" La suma de los números " <<resultado <<endl; 
resultado=num1-num2; 
cout<<" La resta de los números  "<<resultado <<endl; 
}