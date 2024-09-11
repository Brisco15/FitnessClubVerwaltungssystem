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

	cout << endl;
	//Kursdaten ausgeben
	cout << "Welcome to our " << " " << kurs[kurs.size() - 1].GetName() << " " << " Kurs" << " "<< "Ihr Trainer ist : " << kurstrainer <<endl <<endl;


	//klassen-Polymorphie
	cout << "Klassen Polymorphie " << endl << endl;
	//Fitnessclub Klass
	vector <Fitnessclub*> Personen;

	Personen.resize(2);

	// Speicherplatz reservieren
	Personen[0] = new Trainer;
	

	

	//Trainer Daten in der Klasse Fitnessclub speichern 
	cout << "  Trainer Vorname eintragen : ";
	cin >> vorname;
	Personen[0]->SetVorname(vorname);

	cout << "  Trainer Nachname eintragen : ";
	cin >> nachname;
	Personen[0]->SetNachname(nachname);

	cout << "  Trainer Alter eintragen : ";
	cin >> alter;
	Personen[0]->SetAlter(alter);

	cout << "  TrainerID eintragen : ";
	cin >> trainerID;
	Personen[0]->SetTrainerID(trainerID);

	cout << "  Trainer Fachgebiet eintragen : ";
	cin >> fachgebiet;
	Personen[0]->SetFachgebiet(fachgebiet);


	//Ausgabe der Trainersdaten
	cout << Personen[0]->GetVorname() << " " << Personen[0]->GetNachname() << " " << "von Alter " << Personen[0]->GetAlter() << " " <<
		"mit ID Nummer : " << Personen[0]->GetTrainerID() << " " << "ist einer unserer " << " " << Personen[0]->GetFachgebiet() << " " << "Trainer " << endl << endl;


	Personen[1] = new Mitglied;
	//Mitglied Daten in der Klasse Fitnessclub speichern 
	cout << "  Mitglied's Vorname eintragen : ";
	cin >> vorname;
	Personen[1]->SetVorname(vorname);

	cout << "  Mitglied's Nachname eintragen : ";
	cin >> nachname;
	Personen[1]->SetNachname(nachname);

	cout << "  Mitglied's Alter eintragen : ";
	cin >> alter;
	Personen[1]->SetAlter(alter);

	cout << "  Mitglied's Nummer eintragen : ";
	cin >> mitgliedsnummer;
	Personen[1]->SetMitgliedsNummer(mitgliedsnummer);




	//Ausgabe der Daten

	//Ausgabe der Trainersdaten
	cout << Personen[0]->GetVorname() << " " << Personen[0]->GetNachname() << " " << Personen[0]->GetAlter() << " " <<
		Personen[0]->GetTrainerID() << " " << "ist einer unserer " << " " << Personen[0]->GetFachgebiet() <<" " << "Trainer " << endl << endl;

	//Ausgabe der Mitgliedsdaten
	cout << Personen[1]->GetVorname() << " " << Personen[1]->GetNachname() << " " << Personen[1]->GetAlter() << " " << 
		Personen[1]->GetMitgliedsNummer() << " " << "ist einer unserer Abonnenten" << endl;
		
	return 0;
}
