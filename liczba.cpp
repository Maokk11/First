#include <iostream>
using namespace std;

bool czy_doskonala(int liczba) {
    int suma = 0;
    for (int i = 1; i < liczba; ++i) {
        if (liczba % i == 0) {
            suma += i;
        }
    }
    return suma == liczba;
}

int main() {
    int liczba;
    cin >> liczba;
    cout << "Wczytana liczba: " << liczba << endl;
    cout << "Czy liczba doskonala? " << (czy_doskonala(liczba) ? "Tak" : "Nie") << endl;
    return 0;
}
