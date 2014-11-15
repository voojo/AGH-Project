#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;

class Pracownik
{
private:
	string imie;
	string nazwisko;
	int nip;
	int pesel;
protected:
	int pensja;

public:

	Pracownik()
	{

		cout << "Podaj imie:" << endl;
		cin >> imie;
		cout << "Podaj nazwisko:" << endl;
		cin >> nazwisko;
		cout << "Podaj NIP" << endl;
		cin >> nip;
		cout << "Podaj pesel:" << endl;
		cin >> pesel;

	}

	virtual void oblicz_zarobki() = 0;
	virtual void print();
	virtual ~Pracownik(){}

};


class Pracownik_stala :public Pracownik
{

public:
	Pracownik_stala(){
		cout << "podaj pensje" << endl;
		cin >> pensja;

	}

	virtual void oblicz_zarobki();
	virtual void print();
	~Pracownik_stala(){}
};

class Pracownik_zlecenie :public Pracownik
{
	int ilosc_godzin;

public:
	Pracownik_zlecenie(){

		cout << "Podaj ilosc przepracowanych godzin:" << endl;
		cin >> ilosc_godzin;

	}

	virtual void oblicz_zarobki();
	virtual void print();
	~Pracownik_zlecenie(){}
};




class Pracownik_handlowiec :public Pracownik
{
	int zarobek;

public:
	Pracownik_handlowiec(){

		cout << "Podaj zgromadzony zysk ze sprzedazy:" << endl;

		cin >> zarobek;
	}

	virtual void oblicz_zarobki();
	virtual void print();
	~Pracownik_handlowiec(){}
};

