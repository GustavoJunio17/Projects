#include <iostream>

using namespace std;

struct TDados
{
   string nome, matricula;	
   float nota1, nota2;
};

int main()
{
	int quantidadeAlunos;
	cout <<"Quantos alunos estão matriculados? ";
	cin >> quantidadeAlunos;
	TDados alunos[quantidadeAlunos];
	cout<<"Cadastro:\n";
	for(int i=0; i<quantidadeAlunos; i++)
	{
		cout<<"Nome: ";cin>>alunos[i].nome;
		cout<<"Matrícula: ";cin>>alunos[i].matricula;
		cout<<"Nota_1: ";cin>>alunos[i].nota1;
		cout<<"Nota_2: ";cin>>alunos[i].nota2;
		cout<<"\n";
	}
	for(int i=0; i<quantidadeAlunos; i++)
	{
	   cout<<"Matrícula: "<< alunos[i].matricula;
       cout<<" Média: "<< 
	                 (alunos[i].nota1+alunos[i].nota2)/2;	
       cout<<endl;
    }	
	return 0;
}

