/*******************************************************************************
**                                                                            **      
**                           TITOL: R1 ARRAY DE 8 LEDs - P1                   **
**                                                                            **  
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 25/01/2017  **
*******************************************************************************/
//**********************************INCLUDE*************************************

//*********************************VARIABLES************************************
int led1 = 5;
int led2 = 6;
int led3 = 7;
int led4 = 8;
int led5 = 9;
int led6 = 10;
int led7 = 11;
int led8 = 12;
//***********************************SETUP**************************************
void setup () {
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (led3, OUTPUT);
  pinMode (led4, OUTPUT);
  pinMode (led5, OUTPUT);
  pinMode (led6, OUTPUT);
  pinMode (led7, OUTPUT);
  pinMode (led8, OUTPUT);
}
//************************************LOOP**************************************
void loop () {
  digitalWrite (led1, HIGH);
  digitalWrite (led2, HIGH);
  digitalWrite (led3, HIGH);
  digitalWrite (led4, HIGH);
  digitalWrite (led5, HIGH);
  digitalWrite (led6, HIGH);
  digitalWrite (led7, HIGH);
  digitalWrite (led8, HIGH);
  
  delay (500);
  
  digitalWrite (led1, LOW);
  digitalWrite (led2, LOW);
  digitalWrite (led3, LOW);
  digitalWrite (led4, LOW);
  digitalWrite (led5, LOW);
  digitalWrite (led6, LOW);
  digitalWrite (led7, LOW);
  digitalWrite (led8, LOW);
  
  delay (500);
}
//**********************************FUNCIONS************************************
