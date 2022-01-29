/*
  Titre      : tester du cable RJ45
  Auteur     : Duvalier Tsagmo
  Date       : 28/01/2022
  Description: ce programme va nous permettre de tester si un cable fonctionne ou non
  Version    : 0.0.1
*/

#include <Arduino.h>
#include "RJ45.h"

//Declaration de nos objets
portRj45 portRj45Envoyant(32, 33, 25, 26, 27, 14, 12, 13);
portRj45 portRj45Recevant(19, 18, 5, 17, 16, 4, 2, 15);

void setup()
{
    Serial.begin(9600);
    intialisationOUTPUT(32, 33, 25, 26, 27, 14, 12, 13);
    intialisationINPUT(19, 18, 5, 17, 16, 4, 2, 15);
}

void loop()
{
    etatBrocheHIGH(32, 33, 25, 26, 27, 14, 12, 13);
    if (fonctionRecevoir(19, 18, 5, 17, 16, 4, 2, 15) == true)
    {
        Serial.println("OUI le cable fonctionne");
    }
    else
    {
        Serial.println("NON le cable est defectueux");
    }
    delay(1000);
}