#include <iostream>
#include <string>
#include "pracownicy.h"
#include <vector>

using namespace std;

void add(vector<Pracownik*> &wektor);
void show(vector<Pracownik*> &wektor);


int main()
{

	int i = 0;
	int n = 0;
	char znakmenu;
	vector<Pracownik*> wektor;

	do
	{
		cout << "Co chcesz zrobiæ ? " << endl << "a-dodaj pracownika" << endl << "s-wyswietl pracownikow" << endl << "d-wyjscie" << endl;
		cin >> znakmenu;
		switch (znakmenu)
		{
		case 'a':

			add(wektor);
			break;

		case 's':

			show(wektor);
			break;
		}

	} while (znakmenu != 'd');


	return 0;
}





void add(vector<Pracownik*> &wektor)
{
	char znak;

	cout << "Podaj na jaki typ umowy bedzie zatrudniona osoba : " << endl << "a-umowa na stale" << endl << "s-umowa zlecenie" << endl << "d-umowa dla pracownika typu handlowiec" << endl;
	cin >> znak;
	switch (znak)
	{
	case 'a':

		wektor.push_back(new Pracownik_stala);

		break;

	case 's':

		wektor.push_back(new Pracownik_handlowiec);
		(*wektor.back()).oblicz_zarobki();
		break;

	case 'd':

		wektor.push_back(new Pracownik_zlecenie);
		(*wektor.back()).oblicz_zarobki();
		break;

	}


}
void show(vector<Pracownik*> &wektor)
{
	int temp;
	int i;

	for (i = 0; i < wektor.size(); i++)
	{
		cout << "pracownik numer : " << i + 1 << endl;
		(*wektor[i]).print();
		cout << endl;
	}

}

