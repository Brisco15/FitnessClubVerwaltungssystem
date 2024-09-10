#pragma once
#include "Fitnessclub.h"
#include<string>
using namespace std;

class Trainer :
    protected Fitnessclub
{

protected:
    string Vorname,Nachname,Fachgebiet;
    int TrainerID;
    short Alter;

public:
   
    
    void SetVorname(string Vorname);
    string GetVorname();
    void SetNachname(string Nachname);
    string GetNachname();
    void SetFachgebiet(string Fachgebiet);
    string GetFachgebiet();
    void SetTrainerID(int TrainerID);
    int GetTrainerID();
    void SetAlter(short Alter);
    short GetAlter();
};

