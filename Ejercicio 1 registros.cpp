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
		cout<<endl;
}

void eliminar_contacto(contactoemail arr[], int &n, string &buscar)
{
		cout<<"ingrese el email del contacto a eliminar: "; cin>>buscar;
		for(int i=0; i<n; i++)
		{
			if(buscar==arr[i].email)
			{
				for(int j=i+1; j<n; j++)
				{
					arr[j-1].nombres=arr[j].nombres;
					arr[j-1].sexo=arr[j].sexo;
					arr[j-1].edad=arr[j].edad;
					arr[j-1].telefono=arr[j].telefono;
					arr[j-1].email=arr[j].email;
					arr[j-1].nacionalidad=arr[j].nacionalidad;
				}
				n--;
			}
		}
		cout<<endl;
}



int main()
{
	contactoemail agregar[100];
	string buscar;
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
			case 'b': eliminar_contacto(agregar, n, buscar); break;
			
		}
	}
	while(op!='e');
	return 0;
}
