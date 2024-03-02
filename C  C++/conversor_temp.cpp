#include <iostream>
#include <locale.h>

using namespace std;

float calcularFahrenheit(float x);
int calcularKelvin(float x);

int main()
{
    float celsius;
    cout << "Digite a temperatura em C°: ";
    cin >> celsius;
    cout << "Fahrenheit: " << calcularFahrenheit(celsius) << endl;
    cout << "Kevin: " << calcularKelvin(celsius) << endl;

    return 0;
}
float calcularFahrenheit(float x)
{
    float temperaturaFahrenheit = (9 * x) / 5 + 32;
    return temperaturaFahrenheit;
}

int calcularKelvin(float x)
{
    int temperaturaKelvin = x + 273;
    return temperaturaKelvin;
}