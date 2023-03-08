#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome1, nome2;
    cout << "Digite o primeiro nome: ";
    cin >> nome1;
    cout << "Digite o segundo nome: ";
    cin >> nome2;

    if (nome1 < nome2) {
        cout << nome1 << endl << nome2 << endl;
    } else {
        cout << nome2 << endl << nome1 << endl;
    }

    return 0;
}
