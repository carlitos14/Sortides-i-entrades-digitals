/*******************************************************************************
**                                                                            **
**                           TITOL: R2- CRUILLA DE SEMÀFORS                   **
**                                                                            **
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 08/02/2017  **
*******************************************************************************/
//**********************************INCLUDE*************************************

//*********************************VARIABLES************************************
const int ledGreen1 = 12;
const int ledOrange1 = 11;
const int ledRed1 = 10;
const int ledGreen2 = 9;
const int ledOrange2 = 8;
const int ledRed2 = 7;
//***********************************SETUP**************************************
void setup () {
  pinMode (ledGreen1, OUTPUT);
  pinMode (ledOrange1, OUTPUT);
  pinMode (ledRed1, OUTPUT);
  pinMode (ledGreen2, OUTPUT);
  pinMode (ledOrange2, OUTPUT);
  pinMode (ledRed2, OUTPUT);
}
//************************************LOOP**************************************
void loop () {
  
  digitalWrite (ledGreen1, LOW);
  digitalWrite (ledOrange1, LOW);
  digitalWrite (ledRed1, HIGH);
  digitalWrite (ledGreen2, LOW);
  digitalWrite (ledOrange2, LOW);
  digitalWrite (ledRed2, HIGH);

  delay (1000);

  digitalWrite (ledGreen1, LOW);
  digitalWrite (ledOrange1, LOW);
  digitalWrite (ledRed1, HIGH);
  digitalWrite (ledGreen2, HIGH);
  digitalWrite (ledOrange2, LOW);
  digitalWrite (ledRed2, LOW);
  
  delay (4000);

  digitalWrite (ledGreen1, LOW);
  digitalWrite (ledOrange1, LOW);
  digitalWrite (ledRed1, HIGH);
  digitalWrite (ledGreen2, LOW);
  digitalWrite (ledOrange2, HIGH);
  digitalWrite (ledRed2, LOW);

  delay (1000);

  digitalWrite (ledGreen1, LOW);
  digitalWrite (ledOrange1, LOW);
  digitalWrite (ledRed1, HIGH);
  digitalWrite (ledGreen2, LOW);
  digitalWrite (ledOrange2, LOW);
  digitalWrite (ledRed2, HIGH);

  delay (1000);

  digitalWrite (ledGreen1, HIGH);
  digitalWrite (ledOrange1, LOW);
  digitalWrite (ledRed1, LOW);
  digitalWrite (ledGreen2, LOW);
  digitalWrite (ledOrange2, LOW);
  digitalWrite (ledRed2, HIGH);

  delay (4000);

  digitalWrite (ledGreen1, LOW);
  digitalWrite (ledOrange1, HIGH);
  digitalWrite (ledRed1, LOW);
  digitalWrite (ledGreen2, LOW);
  digitalWrite (ledOrange2, LOW);
  digitalWrite (ledRed2, HIGH);

  delay (1000);

  digitalWrite (ledGreen1, LOW);
  digitalWrite (ledOrange1, LOW);
  digitalWrite (ledRed1, HIGH);
  digitalWrite (ledGreen2, LOW);
  digitalWrite (ledOrange2, LOW);
  digitalWrite (ledRed2, HIGH);
}
//**********************************FUNCIONS************************************
