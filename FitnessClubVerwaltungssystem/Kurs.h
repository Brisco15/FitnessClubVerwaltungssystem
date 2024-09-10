#pragma once
#include "Fitnessclub.h"

class Kurs :
    protected Fitnessclub
{

protected:
    string Name;
public:
    void SetName(string Name);
    string GetName();
};

