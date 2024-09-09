#include <iostream>
#include <string>
#include <vector>
#include "Fitnessclub.h"
#include "Mitglied.h"
using namespace std;


int main()
{
	string name,vorname,nachname;
	short alter;
	int mitgliedsnummer = 0;

	Fitnessclub fitnessclub;

	//Eingabe des Fitnessclubnames
	cout << "Bitte geben Sie den Namen des Fitnessclubs ein: ";
	cin >> name;
	fitnessclub.SetName(name);

	//Ausgabe des Fitnessclubnames
	cout << "Willkommen bei" << " " << fitnessclub.GetName(name) << " " << "Fitness Club " << endl;

	//dynamische Arrays
	vector <Mitglied> mitglied(0);

	//Personenart Trainer oder Mitglied
	char personenart = '0';

	//Eingabe der Personenart
	cout << "Personenart (M itglied, T rainer ,E nde): ";
	cin >> personenart;

	//allgemeine Daten der Personnenart eintragen
	// Vorname
	cout << "Vorname: ";
	cin >> vorname;

	// Nachname
	cout << "Nachname: ";
	cin >> nachname;

	// Alter
	cout << "Alter: ";
	cin >> alter;

	//Verzweigung nach der Personnenart
	switch (personenart)
	{
	case 'm':
	case 'M':
		mitglied.resize(mitglied.size() + 1);

		//Mitgliedsdaten eintragen
		mitglied[mitglied.size() - 1].SetVorname(vorname);
		mitglied[mitglied.size() - 1].SetNachname(nachname);
		mitglied[mitglied.size() - 1].SetAlter(alter);
		mitglied[mitglied.size() - 1].SetMitgliedsNummer(mitgliedsnummer);

		//Mitgliedsdaten ausgeben
		cout << "Die Person " << mitglied[mitglied.size() - 1].GetVorname() << " " << mitglied[mitglied.size() - 1].GetNachname() << " "
			<< "im Alter von " << " " << mitglied[mitglied.size() - 1].GetAlter() << " " << " und mit der Mitgliedsnummer "
			<< mitglied[mitglied.size() - 1].GetMitgliedsNummer() << " ist eines  Mitglieder des Fitness Club" <<" "<< fitnessclub.GetName(name) << endl;
	default:
		break;
	}

	
	return 0;
}
