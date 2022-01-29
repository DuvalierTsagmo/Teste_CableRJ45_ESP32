#include "RJ45.h"
#include <Arduino.h>

void intialisationINPUT(int oB, int o, int vB, int b, int bB, int v, int mB, int m)
{
    pinMode(oB, INPUT);
    pinMode(o, INPUT);
    pinMode(vB, INPUT);
    pinMode(b, INPUT);
    pinMode(bB, INPUT);
    pinMode(v, INPUT);
    pinMode(mB, INPUT);
    pinMode(m, INPUT);
}

void intialisationOUTPUT(int oB, int o, int vB, int b, int bB, int v, int mB, int m)
{
    pinMode(oB, OUTPUT);
    pinMode(o, OUTPUT);
    pinMode(vB, OUTPUT);
    pinMode(b, OUTPUT);
    pinMode(bB, OUTPUT);
    pinMode(v, OUTPUT);
    pinMode(mB, OUTPUT);
    pinMode(m, OUTPUT);
}

void etatBrocheHIGH(int oB, int o, int vB, int b, int bB, int v, int mB, int m)
{
    digitalWrite(oB, HIGH);
    digitalWrite(o, HIGH);
    digitalWrite(vB, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(bB, HIGH);
    digitalWrite(v, HIGH);
    digitalWrite(mB, HIGH);
    digitalWrite(m, HIGH);
}

bool fonctionRecevoir(int oB, int o, int vB, int b, int bB, int v, int mB, int m)
{
    int Broche1Envoyer;
    int Broche2Envoyer;
    int Broche3Envoyer;
    int Broche4Envoyer;
    int Broche5Envoyer;
    int Broche6Envoyer;
    int Broche7Envoyer;
    int Broche8Envoyer;

    Broche1Envoyer = digitalRead(oB);
    Broche2Envoyer = digitalRead(o);
    Broche3Envoyer = digitalRead(vB);
    Broche4Envoyer = digitalRead(b);
    Broche5Envoyer = digitalRead(bB);
    Broche6Envoyer = digitalRead(v);
    Broche7Envoyer = digitalRead(mB);
    Broche8Envoyer = digitalRead(m);

    if ((Broche1Envoyer == 1) && (Broche2Envoyer == 1) && (Broche3Envoyer == 1) && (Broche4Envoyer == 1) && (Broche5Envoyer == 1) && (Broche6Envoyer == 1) && (Broche7Envoyer == 1) && (Broche8Envoyer == 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}