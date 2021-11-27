#include <iostream>
using namespace std;

int main() { 
int casa=0;
int carro=0;
//Le puse endl a todas para que halla un enter en cada linea
cout << "digite un numero" << endl;
cin>>casa;  
cout<< "digite un numero" << endl; 
cin>>carro; 
//La condicion estaba al reves (casa<carro)
  if (carro<casa) { 
  cout<<casa <<" es mayor " << carro << endl; 
  } else { 
  cout<<casa <<" es menor " << carro << endl;
  }
  
}