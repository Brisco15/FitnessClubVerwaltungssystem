#pragma once
#include <string>
#include "Fitnessclub.h"

class Mitglied :
    protected Fitnessclub
{
protected:
    string Vorname, Nachname;
    short Alter;
    int Mitgliedsnummer;

public:
    void SetVorname(string Vorname);
    string GetVorname();

    void SetNachname(string Nachname);
    string GetNachname();

    void SetAlter(short Alter);
    short GetAlter();


    void SetMitgliedsNummer(int Mitgliedsnummer);
    int GetMitgliedsNummer();


};

