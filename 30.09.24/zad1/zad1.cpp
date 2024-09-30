#include <iostream>
using namespace std;
/*
1.Klasa Prostokąt: która ma prywatne pola szerokosc i wysokosc
dodaj metody do ustawiania i pobierania wartości tych pól
oraz metodę do obliczania pola prostokąta.
*/

class Prostokat {
private:
	double szerokosc, wysokosc;
public:
	void ustawSzerplpsc(double s) { this->szerokosc = s; }
	void ustawWysokosc(double w) { this->wysokosc = w; }
	double obliczPole() { return this->szerokosc * this->wysokosc;}
};

int main()
{
	cout << "Zadanie nr1\n";
	Prostokat prostokat;
	prostokat.ustawSzerplpsc(10.23);
	prostokat.ustawWysokosc(4.45);
	cout << "Wynik Pole prostokata = " << prostokat.obliczPole();

	return EXIT_SUCCESS;

}
