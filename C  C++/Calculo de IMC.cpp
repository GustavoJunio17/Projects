#include <iostream>

using namespace std;

struct TDados
{
   string nome, cpf;	
   float altura, peso;
   char sexo;
};

int main()
{
	int quantidadeDePacientes;
	cout<<"Qual número de pacientes? ";
	cin >> quantidadeDePacientes;
	TDados pacientes[quantidadeDePacientes];
	for(int i=0; i<quantidadeDePacientes; i++)
	{
		cout<<"Nome: ";cin>>pacientes[i].nome;
		cout<<"CPF: ";cin>>pacientes[i].cpf;
		cout<<"Altura: ";cin>>pacientes[i].altura;
		cout<<"Peso: ";cin>>pacientes[i].peso;
		cout<<"Sexo (M/F): ";cin>>pacientes[i].sexo;
		cout<<"\n";
	}
	
	string cpfConsulta;
	cout<<"Qual CPF para consulta? ";
	cin >> cpfConsulta;
	for(int i=0; i<quantidadeDePacientes; i++)
	{	
		if(pacientes[i].cpf== cpfConsulta)
		{
			cout<<"IMC= ";
			cout<< pacientes[i].peso/(pacientes[i].altura*pacientes[i].altura);
		}
	}
	return 0;
}
