/*
@autor:
 * Jhon velasco
 * @ frediv0406
 * Estudiante: Ing.Sistemas UDI
*/
#include <iostream>
using namespace std;
int main(){
	int a,b,c,mayor,menor;
	cout<<"Digite el numero A:\n";
	cin>>a;
	cout<<"Digite el numero B:\n";
	cin>>b;
	cout<<"Digite el numero C:\n";
	cin>>c;
	if(a>b){
		if(a>c){
		mayor=a;
		}
		if(c<b){
			menor=c;
		}
		else{
			mayor=c;
			menor=b;
		}
	}
	else{
		if(b>c){
			mayor=b;
			if(c<b){
			menor=b;
		    }
		}
		else{
			mayor=c;
			menor=a;
		}
	}
	cout<<"El numero mayor es: "<<mayor;
	cout<<"\nEl numero menor es: "<<menor;
}
