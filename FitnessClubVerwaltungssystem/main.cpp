#include <iostream>
#include <string>
#include <vector>
#include "Fitnessclub.h"
#include "Mitglied.h"
#include "Trainer.h"
#include "Kurs.h"
using namespace std;


int main()
{
	string name, vorname, nachname, fachgebiet, kurstrainer;
	short alter;
	int mitgliedsnummer = 0;
	int trainerID = 0;
	char nochmal = 'j';
	
	
	


	Fitnessclub fitnessclub;

	//Eingabe des Fitnessclubnames
	cout << "Bitte geben Sie den Namen des Fitnessclubs ein: ";
	cin >> name;
	fitnessclub.SetName(name);

	//Ausgabe des Fitnessclubnames
	cout << "Willkommen bei" << " " << fitnessclub.GetName(name) << " " << "Fitness Club " << endl;
	
	//dynamische Arrays
	vector <Mitglied> mitglied(0);
	vector <Trainer> trainer(0);
	vector <Kurs> kurs(0);


	//Personenart Trainer oder Mitglied
	char personenart = '0';


	do
	{
		//Eingabe der Personenart
		cout << "Personenart (M itglied, T rainer ): ";
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

			cout << "Mitgliedsnummer: ";
			cin >> mitgliedsnummer;
			mitglied[mitglied.size() - 1].SetMitgliedsNummer(mitgliedsnummer);

			//Mitgliedsdaten ausgeben
			cout << "Die Person " << mitglied[mitglied.size() - 1].GetVorname() << " " << mitglied[mitglied.size() - 1].GetNachname() << " "
				<< "im Alter von " << " " << mitglied[mitglied.size() - 1].GetAlter() << " " << " und mit der Mitgliedsnummer "
				<< mitglied[mitglied.size() - 1].GetMitgliedsNummer() << " ist eines  Mitglieder des Fitness Club" << " " << fitnessclub.GetName(name) << endl;

			break;
		case 't':
		case 'T':
			trainer.resize(trainer.size() + 1);

			//Trainersdaten eintragen
			trainer[trainer.size() - 1].SetVorname(vorname);
			trainer[trainer.size() - 1].SetNachname(nachname);
			trainer[trainer.size() - 1].SetAlter(alter);

			cout << "trainerID: ";
			cin >> trainerID;
			trainer[trainer.size() - 1].SetTrainerID(trainerID);

			cout << "fachgebiet: ";
			cin >> fachgebiet;
			trainer[trainer.size() - 1].SetFachgebiet(fachgebiet);

			//Trainersdaten ausgeben
			cout << "Der/Die Trainer(in) " << trainer[trainer.size() - 1].GetVorname() << " " << trainer[trainer.size() - 1].GetNachname() << " "
				<< "im Alter von " << " " << trainer[trainer.size() - 1].GetAlter() << " " << "mit dem Fachgebiet " << " " << trainer[trainer.size() - 1].GetFachgebiet() << " " << " hat den trainerID "
				<< trainer[trainer.size() - 1].GetTrainerID() << endl;

			break;
		default:
			//personenart nicht gleich Midglied oder Trainer 
			cout << "Fehler! Drücken Sie (M oder m) für Mitglied oder (T oder t) für Trainer";
			break;

		}
		 // Nochmal eintragen die Dateneingabe für die Personenart 
		cout << " Möchten Sie die Personenart nochmal eingeben? (J/N) : ";
		cin >> nochmal;
		cout << endl;

	} while (nochmal != 'n' && nochmal != 'N');

	///Kurs/////////////////////
	kurs.resize(kurs.size() + 1);

	//Kursdaten eintragen
	
	cout << "Geben Sie den Kursname: ";
	cin >> name;
	kurs[kurs.size() - 1].SetName(name);

	cout << "Bitte weisen Sie dem Kurs einen Trainer zu: ";
	cin >> kurstrainer;
	kurs[kurs.size() - 1].SetTrainer(kurstrainer);

	//Kursdaten ausgeben
	cout << "Welcome to our " << " " << kurs[kurs.size() - 1].GetName() << " " << " Kurs" << " "<< "Ihr Trainer ist : " << kurstrainer << endl;

	return 0;
}
