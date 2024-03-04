#include <iostream>
#include <locale.h>
using namespace std;

float calcArea(float b, float a)
{
    return b * a;
}

int main()
{
    float base, altura;
    setlocale(LC_ALL, "portuguese");
    cout << "Informe a base e a altura de um retângulo: ";
    cin >> base >> altura;
    float area = calcArea(base, altura);
    cout << "área = " << area << "m²";
    return 0;
}