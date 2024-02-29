#include <iostream>

using namespace std;

float somar(float x, float y);
float subtrair(float x, float y);
float multiplicar(float x, float y);
void dividir(float x, float y);

int main()
{
	float numero1, numero2;
	cout << "Informe 2 valores: ";
	cin >> numero1 >> numero2;
	cout << "Soma =" << somar(numero1, numero2) << endl;

	cout << "Informe 2 valores: ";
	cin >> numero1 >> numero2;
	cout << "Diferen?a= " << subtrair(numero1, numero2) << endl;

	cout << "Informe 2 valores: ";
	cin >> numero1 >> numero2;
	cout << "Produto= " << multiplicar(numero1, numero2) << endl;

	cout << "Informe 2 valores: ";
	cin >> numero1 >> numero2;
	dividir(numero1, numero2);
	return 0;
}

float somar(float x, float y)
{
	float soma = x + y;
	return soma;
}

float subtrair(float x, float y)
{
	float sub = x - y;
	return sub;
}

float multiplicar(float x, float y)
{
	float mult = x * y;
	return mult;
}

void dividir(float x, float y)
{
	if (y == 0)
		cout << "ERRO!!Impossível dividir por ZERO";
	else
		cout << "Divisão= " << x / y;
}