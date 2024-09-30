#include <iostream>
using namespace  std;
/*
3. Polimorfizm: Stworz klase Figura, kwadrat i kolo. zdefiniuj w klasie Figura wirtualna metode
ktora adpiszesz w klasach kwadrat i kolo
*/
class Figura {
public:
	virtual double obliczPole() = 0; 
};
class Kwadrat : public Figura {
private:
	double bok;
public:
};
class Kolo : public Figura {};
int main()
{
	cout << "Zadanie nr 3 - Polimorfizm\n";

	return 0;
}
