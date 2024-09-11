#pragma once
#include<string>
using namespace std;

class Fitnessclub
{

protected:
	//name des Fitness Club
    string Name;
    
   
public:
	void SetName(string Name);
	string GetName(string Name);


	///////////////////////////////////

    virtual void SetVorname(string Vorname);
    virtual string GetVorname();

    virtual void SetNachname(string Nachname);
    virtual string GetNachname();

    virtual void SetAlter(short Alter);
    virtual short GetAlter();

    virtual void SetFachgebiet(string Fachgebiet);
    virtual string GetFachgebiet();
    virtual void SetTrainerID(int TrainerID);
    virtual int GetTrainerID();

    virtual void SetMitgliedsNummer(int Mitgliedsnummer);
    virtual int GetMitgliedsNummer();
};

