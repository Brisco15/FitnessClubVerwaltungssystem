#include "Kurs.h"


// Standardkonstruktor
Kurs::Kurs() : Name("")
{
    kursTrainer = new Trainer;
}

void Kurs::SetName(string& Name)
{
    // TODO: Fügen Sie hier Ihren Implementierungscode ein..
    this->Name = Name;
}


string Kurs::GetName()
{
    // TODO: Fügen Sie hier Ihren Implementierungscode ein..
    return Name;
}

void Kurs::SetTrainer(string Trainer) {
   
    kursTrainer->SetNachname(Trainer);
}

Trainer* Kurs::GetTrainer()  {
    return kursTrainer;
}

// Destruktor
Kurs::~Kurs() {
    
     delete kursTrainer, Name ;
}
