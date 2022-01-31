#include "RJ45.h"
#include <Arduino.h>

//les fonctions developper
void portRj45::intialisationINPUT()
{
    pinMode(orangeBlanc, INPUT);
    pinMode(orange, INPUT);
    pinMode(vertBlanc, INPUT);
    pinMode(vert, INPUT);
    pinMode(bleuBlanc, INPUT);
    pinMode(bleu, INPUT);
    pinMode(maronBlanc, INPUT);
    pinMode(maron, INPUT);
}

portRj45::portRj45(int oB, int o, int vB, int b, int bB, int v, int mB, int m)
{

    orangeBlanc = oB;
    orange = o;
    vertBlanc = vB;
    bleu = b;
    bleuBlanc = bB;
    vert = v;
    maronBlanc = mB;
    maron = m;
}

void portRj45::intialisationOUTPUT()
{
    pinMode(orangeBlanc, OUTPUT);
    pinMode(orange, OUTPUT);
    pinMode(vertBlanc, OUTPUT);
    pinMode(vert, OUTPUT);
    pinMode(bleuBlanc, OUTPUT);
    pinMode(bleu, OUTPUT);
    pinMode(maronBlanc, OUTPUT);
    pinMode(maron, OUTPUT);
}

void portRj45::etatBrocheHIGH()
{
    digitalWrite(orangeBlanc, HIGH);
    digitalWrite(orange, HIGH);
    digitalWrite(vertBlanc, HIGH);
    digitalWrite(vert, HIGH);
    digitalWrite(bleuBlanc, HIGH);
    digitalWrite(bleu, HIGH);
    digitalWrite(maronBlanc, HIGH);
    digitalWrite(maron, HIGH);
}

bool portRj45::fonctionRecevoir()
{
    int Broche1Envoyer;
    int Broche2Envoyer;
    int Broche3Envoyer;
    int Broche4Envoyer;
    int Broche5Envoyer;
    int Broche6Envoyer;
    int Broche7Envoyer;
    int Broche8Envoyer;

    Broche1Envoyer = digitalRead(orangeBlanc);
    Broche2Envoyer = digitalRead(orange);
    Broche3Envoyer = digitalRead(vertBlanc);
    Broche4Envoyer = digitalRead(vert);
    Broche5Envoyer = digitalRead(bleuBlanc);
    Broche6Envoyer = digitalRead(bleu);
    Broche7Envoyer = digitalRead(maronBlanc);
    Broche8Envoyer = digitalRead(maron);

    //les instructions sur les broches
    if ((Broche1Envoyer == 1) && (Broche2Envoyer == 1) && (Broche3Envoyer == 1) && (Broche4Envoyer == 1) && (Broche5Envoyer == 1) && (Broche6Envoyer == 1) && (Broche7Envoyer == 1) && (Broche8Envoyer == 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void portRj45::etatBrocheLOW()
{

    digitalWrite(orange, LOW);
    digitalWrite(vertBlanc, LOW);
    digitalWrite(vert, LOW);
    digitalWrite(bleuBlanc, LOW);
    digitalWrite(bleu, LOW);
    digitalWrite(maronBlanc, LOW);
    digitalWrite(maron, LOW);
}