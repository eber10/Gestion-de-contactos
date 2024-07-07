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

string obtenerDominio(const string &email)
{
    size_t pos=email.find('@');
    if (pos!=string::npos)
	{
        return email.substr(pos+1);
    }
    return "";
}

bool compararPorDominio(const contactoemail &a, const contactoemail &b)
{
    return obtenerDominio(a.email)<obtenerDominio(b.email);
}
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

void mostrar_lista(contactoemail arr[], int &n)
{
		cout<<"\t\t\t\t\tlista de contactos"<<endl;
		cout<<"-----------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"N."<<endl;
		for(int i=0; i<n; i++)
		{
			cout<<i+1<<"\t"<<arr[i].nombres<<"\t\t"<<arr[i].sexo<<"\t" \
			<<arr[i].edad<<"\t"<<arr[i].telefono<<"\t" \
			<<arr[i].email<<"\t"<<arr[i].nacionalidad<<endl;
		}
}



void mostrar_lista_ordenado(contactoemail arr[], int &n)
{
	    sort(arr, arr + n, compararPorDominio);
		cout<<"\t\t\t\t\tlista de contactos ordenado por servidor de correo"<<endl;
		cout<<"-----------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"N."<<endl;
		for(int i=0; i<n; i++)
		{
			cout<<i+1<<"\t"<<arr[i].nombres<<"\t\t"<<arr[i].sexo<<"\t" \
			<<arr[i].edad<<"\t"<<arr[i].telefono<<"\t" \
			<<arr[i].email<<"\t"<<arr[i].nacionalidad<<endl;
		}	
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
			case 'c': mostrar_lista(agregar, n); break;
			case 'd': mostrar_lista_ordenado(agregar, n); break;
			default: break;
		}
	}
	while(op!='e');
	return 0;
}
