#include <iostream>
#include <locale.h>

using namespace std;

void sequencia(int counter);

int main()
{
    int num = 0;
    cout << "Digite um número para que seja desmonstrada a sequência: ";
    cin >> num;
    sequencia(num);
    return 0;
}

void sequencia(int counter)
{
    if (counter >= 0)
    {
        cout << counter << " ";
        counter--;
        sequencia(counter);
    }
}