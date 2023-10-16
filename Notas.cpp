#include <iostream>

using namespace std;

int main() {
    double notas[4];
    double soma = 0;

    for (int i = 0; i < 4; i++) {
        cout << "Insira a nota " << (i + 1) << ": ";
        cin >> notas[i];
        soma += notas[i];
    }

    double media = soma / 4;

    cout << "Notas inseridas: ";
    for (int i = 0; i < 4; i++) {
        cout << notas[i];
        if (i < 3) {
            cout << ", ";
        }
    }

    cout << "\nMédia das notas: " << media << endl;

    return 0;
}

