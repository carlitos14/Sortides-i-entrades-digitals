/*******************************************************************************
**                                                                            **      
**                           TITOL: R1 ARRAY DE 8 LEDs - P3                   **
**                                                                            **  
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 25/01/2017  **
*******************************************************************************/
//**********************************INCLUDE*************************************

//*********************************VARIABLES************************************
int sortida = 5;
//***********************************SETUP**************************************
void setup () {
    for (int n=5; n<13; n++){
    pinMode (n, OUTPUT);
    digitalWrite(n, LOW);
  }
}
//************************************LOOP**************************************
void loop () {
  while (sortida<13) {
    digitalWrite (sortida, HIGH);
    delay (100);
    digitalWrite (sortida, LOW);
    sortida ++;
  }
  sortida = 12;

   while (sortida>4) {
    digitalWrite (sortida, HIGH);
    delay (100);
    digitalWrite (sortida, LOW);
    sortida --;
  }
  sortida = 6;
}
//**********************************FUNCIONS************************************
