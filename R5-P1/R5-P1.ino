/*******************************************************************************
**                                                                            **
**                           TITOL: R5 - P1                                   **
**                                                                            **
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 22/02/2017  **
*******************************************************************************/
//**********************************INCLUDE*************************************

//*********************************VARIABLES************************************
const int led1 = 10;
const int led2 = 9;
const int led3 = 8;
const int led4 = 7;
const int led5 = 6;
const int led6 = 5;
const int led7 = 4;
const int led8 = 3;
const int led9 = 2;
const int niv1 = 11;
const int niv2 = 12;
const int niv3 = 13;

int pausa = 100; 
//***********************************SETUP**************************************
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(niv1, OUTPUT);
  pinMode(niv2, OUTPUT);
  pinMode(niv3, OUTPUT);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(niv1, LOW);
  digitalWrite(niv2, LOW);
  digitalWrite(niv3, LOW);

  delay;
}
//************************************LOOP**************************************
void loop()
{
  digitalWrite(niv1, HIGH);  // mostrat tot el nivell 1
  digitalWrite(led1, HIGH);
  delay(pausa);
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(pausa);
  
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(pausa);
  
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(pausa);
  
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(pausa);
  
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(pausa);
  
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(pausa);
  
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  delay(pausa);
  
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  delay(pausa);
  
  digitalWrite(led9, LOW);
  digitalWrite(niv1, LOW);
  digitalWrite(niv2, HIGH);  // mostrat tot el nivell 2
  
  digitalWrite(led1, HIGH);
  delay(pausa);
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(pausa);
  
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(pausa);
  
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(pausa);
  
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(pausa);
  
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(pausa);
  
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(pausa);
  
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  delay(pausa);
  
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  delay(pausa);
  
  digitalWrite(led9, LOW);
  digitalWrite(niv2, LOW);
  digitalWrite(niv3, HIGH);  // mostrat tot el nivell 3
  digitalWrite(led1, HIGH);
  delay(pausa);
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(pausa);
  
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(pausa);
  
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(pausa);
  
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(pausa);
  
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(pausa);
  
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(pausa);
  
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  delay(pausa);
  
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  delay(pausa);
  
  digitalWrite(led9, LOW);
  digitalWrite(niv3, LOW);
}
//**********************************FUNCIONS************************************
