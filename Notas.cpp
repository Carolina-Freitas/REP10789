#include <iostream>

using namespace std;

int main() {
    double nota1, nota2, nota3, nota4;
    double media;

    cout << "Insira a nota 1 (50%): ";
    cin >> nota1;

    cout << "Insira a nota 2 (10%): ";
    cin >> nota2;

    cout << "Insira a nota 3 (10%): ";
    cin >> nota3;

    cout << "Insira a nota 4 (30%): ";
    cin >> nota4;

    media = (nota1 * 0.5 + nota2 * 0.1 + nota3 * 0.1 + nota4 * 0.3);

    cout << "Notas inseridas: " << nota1 << ", " << nota2 << ", " << nota3 << ", " << nota4 << endl;
    cout << "Média ponderada das notas: " << media << endl;

    return 0;
}

