#include <iostream>
#include <string>

using namespace std;

int main(){// Variables
    int a,b,c;
    int i,j;
    string frase;
    string clave;
    string res;//Entrada de Datos
    cout << "Este programa encripta una frase usando el operador XOR"<<endl;

    cout << "Introduce la frase para encriptar:";
    getline(cin,frase);
    cout << "clave:";
    cin >> clave;
    res = frase;//Se aplica el operador XOR

    for(i = 0; i < frase.length() ; i++) {
        a = int(frase[i]);
        b = int(clave[i]);
        c = a ^ b;
        res[i] = char(c);
    }
    cout << "La frase encriptada es:n";
    cout << res;
    return 0;
}
