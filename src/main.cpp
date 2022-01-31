/*
  Titre      : Tester du cable RJ45
  Auteur     : Duvalier Tsagmo
  Date       : 31/01/2022
  Description: ce programme va nous permettre de tester si un cable fonctionne ou non
  Version    : 0.0.2
*/

#include <Arduino.h>
#include "RJ45.h"

//Declaration de nos objets
int testDroit, testCroise;
portRj45 portRj45Envoyant(32, 33, 25, 26, 27, 14, 12, 13);
portRj45 portRj45Recevant(19, 18, 5, 17, 16, 4, 2, 15);

void setup()
{
    Serial.begin(9600);
    portRj45Envoyant.intialisationOUTPUT();
    portRj45Recevant.intialisationINPUT();
}

//le prototype de notre fonction de notre loop
void loop()
{
    portRj45Envoyant.etatBrocheHIGH();
    if (portRj45Recevant.fonctionRecevoir() == false)
    {
        Serial.println("NON le cable est defectueux");
    }
    else
    {
        Serial.println("OUI le cable fonctionne");

        portRj45Envoyant.etatBrocheLOW();
        testDroit = digitalRead(portRj45Recevant.orangeBlanc);
        testCroise = digitalRead(portRj45Recevant.vertBlanc);
        if (testDroit == 1)
        {
            Serial.println("le cable est droit");
        }

        if (testCroise == 1)
        {
            Serial.println("le cable est croisee");
        }
    }
    delay(1000);
}