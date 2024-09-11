#include "Fitnessclub.h"
#include"Mitglied.h"
#include<iostream>
#include<string>
using namespace std;


void Fitnessclub::SetName(string Name)
{
    // TODO: Fügen Sie hier Ihren Implementierungscode ein..
   this->Name = Name;
}

string Fitnessclub::GetName(string Name)
{
    // TODO: Fügen Sie hier Ihren Implementierungscode ein..
    return this->Name = Name;
}
/////////////////////////////////////////////////////
void Fitnessclub::SetVorname(string Vorname)
{
    
}

string Fitnessclub::GetVorname()
{
   return "0"  ;
}

void Fitnessclub::SetNachname(string Nachname)
{
}

string Fitnessclub::GetNachname()
{
   return "0" ;
}

void Fitnessclub::SetAlter(short Alter)
{
}

short Fitnessclub::GetAlter()
{
    return 0 ;
}

void Fitnessclub::SetFachgebiet(string Fachgebiet)
{
}

string Fitnessclub::GetFachgebiet()
{
    return string();
}

void Fitnessclub::SetTrainerID(int TrainerID)
{
}

int Fitnessclub::GetTrainerID()
{
    return 0;
}

void Fitnessclub::SetMitgliedsNummer(int Mitgliedsnummer)
{
}

int Fitnessclub::GetMitgliedsNummer()
{
    return 0;
}


