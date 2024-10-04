#include <iostream>

using namespace std;

int main() {

    int numero;

    cout << "Digite um número inteiro: ";

    cin >> numero;

    // Calcule o quadrado do número e exiba o resultado
    int quadrado = numero * numero;
    cout << "O quadrado de " << numero << " é " << quadrado << endl;

    return 0;

}