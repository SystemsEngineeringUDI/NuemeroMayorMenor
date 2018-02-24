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
		else{
			mayor=c;
		}
		if(c<b){
			menor=c;
		}
		else{
			menor=b;
		}
	}
	else{
		if(b>c){
			mayor=b;
		}
		else{
			mayor=c;
		}
		if(c<a){
			menor=c;
		    }
		else{
			menor=a;
		}
	}
	cout<<"El numero mayor es: "<<mayor;
	cout<<"\nEl numero menor es: "<<menor;
}
