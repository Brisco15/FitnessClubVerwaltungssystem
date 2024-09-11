#pragma once
#include "Fitnessclub.h"
#include "Trainer.h"

class Kurs :
    protected Fitnessclub
{

protected:
    string Name;
    Trainer* kursTrainer;
public:
    Kurs();
    void SetName(string& Name);
    string GetName();

    void SetTrainer(string trainer);
    Trainer* GetTrainer();

    // Destruktor 
    ~Kurs();
};

