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


int main()
{
	contactoemail agregar[100];
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
			
		}
	}
	while(op!='e');
	return 0;
}
