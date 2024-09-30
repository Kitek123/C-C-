#include <iostream>
using namespace  std;
/*
Dziedziczenie: Stworz klase Pojazd z polami nazwa,
predkosc i metodą jazd. Nastepnie utwórz klase Samochod,
ktora dzieziczy po Pojazd i dodaj do niej pole LiczbaDrzwi
*/
class Pojazd {
public:
	string nazwa;
	int predkosc;
	void jedz() {
		cout << "Pojazd jedzie z predkoscia " << this->predkosc << endl;
	}
};
class Samochod :public Pojazd{
public:
	int liczbaDrzwi;
	void opisSamochodu() { cout << "ilosc drzwi " << this->liczbaDrzwi << endl; }
};
int main()
{
	cout << "Zadabue nr 2\n";
	Samochod fiat;
	fiat.nazwa = "FIAT 125p - KANCIOK";
	fiat.liczbaDrzwi = 5;
	fiat.predkosc = 120;
	fiat.opisSamochodu();
	fiat.jedz();
	return 0;
}
