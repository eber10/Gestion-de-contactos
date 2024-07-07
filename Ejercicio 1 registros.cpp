#include<iostream>
#include<cstring>
#include<algorithm> 
using namespace std;

struct contactoemail
{
	string nombres;
	char sexo;
	int edad;
	int telefono;
	string email;
	string nacionalidad;
};
void registrar_contacto(contactoemail arr[], int &n)
{
		cout<<"ingrese nombres completos: "; cin.ignore(); getline(cin, arr[n].nombres);
		cout<<"ingrese sexo (f/m): "; cin>>arr[n].sexo;
		cout<<"ingrese edad: "; cin>>arr[n].edad;
		cout<<"ingrese telefono: "; cin>>arr[n].telefono;
		cout<<"ingrese email: "; cin>>arr[n].email;
		cout<<"ingrese nacionalidad: "; cin>>arr[n].nacionalidad;
		n++;
		cout<<"contacto agregado exitosamente."<<endl;
}


int main()
{
	contactoemail agregar[100];
	int n=0;
	char op;
	do
	{
		cout<<"a). agregar un contacto."<<endl;
		cout<<"b). eliminar un contacto. "<<endl;
		cout<<"c). mostrar listado general. "<<endl;
		cout<<"d). mostrar listado ordenado por servidor de correo."<<endl;
		cout<<"e). salir del programa."<<endl;
		cin>>op;
		switch(op)
		{
			case 'a': registrar_contacto(agregar, n); break;
			
		}
	}
	while(op!='e');
	return 0;
}
