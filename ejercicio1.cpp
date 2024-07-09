#include<iostream>
#include<string>
using namespace std;

struct contactoEmail{
char nombre[20];
char sexo[10];
int edad;
int telefono;
char email[15];
char nacionalidad[10];
char servidor[13];
string ser;
};
void eliminarContacto(contactoEmail num[],int &i,int indice){
	if(indice>=-1 && indice<i){
		for(int u=indice; u<i;++u){
			num[u]=num[u+1];
		}
		i--;
	}else{
		cout<<"no valido"<<endl;
	}
}
int main(){
	int select;
	const int TAM=20;
	int i=-1;
	int indice;
	do{
	contactoEmail contac[TAM];
	cout<<"selecciona una opcion"<<endl;
	cout<<"1) Agregar un contacto"<<endl;
	cout<<"2) Eliminar un contacto"<<endl;
	cout<<"3) Mostrar listado general de contactos registrados"<<endl;
	cout<<"4) Mostrar listado de contactos existentes"<<endl;
	cout<<"5) salir del programa"<<endl;
	cin>>select;
	switch(select){
	case 1:
	    i++;
		cout<<"ingresa el nombre completo ";
		if(i>0) cin.ignore();
	    cin>>contac[i].nombre;
		cout<<"ingrese el del contacto sexo: ";
		cin>>contac[i].sexo;
		cout<<"ingrese la edad: ";
		cin>>contac[i].edad;
		cout<<"ingrese el telefono: ";
		cin>>contac[i].telefono;
		cout<<"ingrese el email: ";
		cin>>contac[i].email;
		for(int u1=0;u1<=15;u1++){
			if(contac[i].email[u1]=='@'){
				for(int u2=0;u2<=13-u1 ;u2++){
				    if((contac[i].email[u1+u2]<='z' and contac[i].email[u1+u2]>='a') or contac[i].email[u1+u2]=='.' or contac[i].email[u1+u2]=='@'){
				    contac[i].servidor[u2]=contac[i].email[u1+u2];
					}
				}
			}
		}
		cout<<contac[i].servidor<<endl;
		cout<<"ingrese la nacionalidad: ";
		cin>>contac[i].nacionalidad;
		cout<<i;
		cout<<endl;	
	    break;
	case 2:
		int indice;
		cout<<"elige que numero de la lista eliminar"<<endl;
		cin>>indice;
		eliminarContacto(contac,i,indice);
		cout<<"listo"<<endl;
		break;
	case 3:
		for(int o=0;o<=i;o++){
		    cout<<o<<") "<<contac[o].nombre<<" , ";
		    cout<<contac[o].sexo<<" , ";
		    cout<<contac[o].edad<<" , ";
		    cout<<contac[o].telefono<<" , ";
		    cout<<contac[o].email<<" , ";
		    cout<<contac[o].nacionalidad<<endl;
		}
		break;
	case 4:
		for(int a2=0;a2<=i;a2++){
			//if((contac[a2].email[u1]>='a' and contac[i].email[u1+u2]<='z') or contac[i].email[u1+u2]=='.'){
			if(contac[a2].ser=="@gmail.com"){
				cout<<"contactos con @gmail.com"<<endl;
				cout<<contac[a2].nombre<<endl;
			}else if(contac[a2].servidor=="@yahoo.com"){
				cout<<"contactos con @yahoo.com"<<endl;
				cout<<contac[a2].nombre<<endl;
			}else if(contac[a2].servidor=="@icloud.com"){
				cout<<"contactos con @icloud.com"<<endl;
				cout<<contac[a2].nombre<<endl;
			}else if(contac[a2].servidor=="@outlook.com"){
				cout<<"contactos con @outlook.com"<<endl;
				cout<<contac[a2].nombre<<endl;
			}else{
				cout<<"otras cuentas de usuario"<<endl;
				cout<<contac[a2].nombre<<"   "<<contac[a2].email<<endl;
			}
		//}
	    }
	    break;	
	default:
			cout<<"vuelve a escribir"<<endl;
		break;
	    }
    }while(select!=5);
    return 0;
}
