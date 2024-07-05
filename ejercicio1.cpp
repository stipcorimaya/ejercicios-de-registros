#include<iostream>
#include<string>
using namespace std;
struct contactoEmail{
	string nombre_completo,sexo,edad,telefono,email,nacionalidad;
};
void eliminar(contacto num[],int &a,int indice){
	if(indice>=0 && indice<a){
		for(int i=indice; i<a;++i){
			num[i]=num[i+1];
		}
		a--;
	}else{
		cout<<"no valido"<<endl;
	}
}

int main(){
	int select,indice;
	const int TAM=10;
	int a=TAM;
	do{
	contactoEmail contacto;
	cout<<"selecciona una opcion"<<endl;
	cout<<"1) Agregar un contacto"<<endl<<"2) Eliminar un contacto"<<endl<<"3) Mostrar listado general de contactos registrados"<<"4) Mostrar listado de contactos existentes"<<"5) salir del programa"<<endl;
	cint>>select;
	switch(select){
	case 1:
		cout<<"ingresa el nombre completo: ";
		getline(cin,contacto.nombre_completo);
		cout<<"ingrese el del contacto sexo: ";
		getline(cin,contacto.sexo);
		cout<<"ingrese la edad: ";
		getline(cin,contacto.edad);
		cout<<"ingrese el telefono: ";
		getline(cin,contacto.telefono);
		cout<<"ingrese el email: ";
		getline(cin,contacto.email);
		cout<<"ingrese la nacionalidad: "
		getline(cin,contacto.nacionalidad);
		break;
	case 2:
		
		break;
	case 3:
		int buscar= contactoEmail
		break;
	case 5:
		
		break;
	default:
		
		break;
	}
}while(select==4);
}