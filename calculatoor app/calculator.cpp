#include <iostream>
using namespace std;

int main() {
    char operation;
    double a, b;
    char continuer = 'o';

    while (continuer == 'o' || continuer == 'O') {

        cout << "Saisissez le premier nombre : ";
        cin >> a;

        cout << "Saisissez le deuxieme nombre : ";
        cin >> b;

        cout << "Choisissez l'operation (+, -, *, /) : ";
        cin >> operation;

        switch (operation) {
            case '+':
                cout << "Resultat : " << a + b << endl;
                break;

            case '-':
                cout << "Resultat : " << a - b << endl;
                break;

            case '*':
                cout << "Resultat : " << a * b << endl;
                break;

            case '/':
                if (b == 0) {
                    cout << "Erreur : division par zero impossible !" << endl;
                } else {
                    cout << "Resultat : " << a / b << endl;
                }
                break;

            default:
                cout << "Operation inconnue !" << endl;
                break;
        }

        cout << "\nVoulez-vous faire un autre calcul ? (o/n) : ";
        cin >> continuer;
    }

    cout << "Au revoir !" << endl;
    return 0;
}
