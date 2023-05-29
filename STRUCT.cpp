// TWORZENIE STRUKTURY: 
#include <iostream>
using namespace std;
// Definicja struktury
struct Osoba {
   string imie;
    string nazwisko;
    int wiek;
};

int main() {
    // Tworzenie obiektu struktury
    Osoba osoba1;
    osoba1.imie = "Jan";
    osoba1.nazwisko = "Kowalski";
    osoba1.wiek = 30;

    // Dostęp do pól struktury
    cout << "Imię: " << osoba1.imie << endl;
    cout << "Nazwisko: " << osoba1.nazwisko << endl;
    cout << "Wiek: " << osoba1.wiek << endl;

    return 0;
}

//INICJALIZACJA STRUKTURY:
#include <iostream>

// Definicja struktury
struct Osoba {
   string imie;
    string nazwisko;
    int wiek;
};

int main() {
    // Inicjalizacja struktury podczas tworzenia obiektu
    Osoba osoba1 = { "Jan", "Kowalski", 30 };

    // Dostęp do pól struktury
    cout << "Imię: " << osoba1.imie << endl;
    cout << "Nazwisko: " << osoba1.nazwisko << endl;
    cout << "Wiek: " << osoba1.wiek <<endl;

    return 0;
}

// PRZEKAZYWANIE STRUKTURY DO FUNKCJI: 
#include <iostream>

// Definicja struktury
struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

// Funkcja przyjmująca strukturę jako argument
void wypiszOsobe(Osoba osoba) {
   cout << "Imię: " << osoba.imie << endl;
    cout << "Nazwisko: " << osoba.nazwisko << endl;
    cout << "Wiek: " << osoba.wiek << endl;
}

int main() {
    // Tworzenie obiektu struktury
    Osoba osoba1 = { "Jan", "Kowalski", 30 };

    // Wywołanie funkcji z przekazaniem struktury jako argumentu
    wypiszOsobe(osoba1);

    return 0;
}
// TABLICA STRUKTUR: 
#include <iostream>

// Definicja struktury
struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

int main() {
    const int rozmiar = 3;

    // Deklaracja i inicjalizacja tablicy struktur
    Osoba tablicaOsob[rozmiar] = {
        {"Jan", "Kowalski", 30},
        {"Anna", "Nowak", 25},
        {"Piotr", "Lis", 35}
    };

    // Iteracja po tablicy struktur
    for (int i = 0; i < rozmiar; i++) {
        cout << "Osoba " << i + 1 << endl;
        cout << "Imię: " << tablicaOsob[i].imie << endl;
        cout << "Nazwisko: " << tablicaOsob[i].nazwisko << endl;
        cout << "Wiek: " << tablicaOsob[i].wiek <<endl;
        cout << endl;
    }

    return 0;
}
