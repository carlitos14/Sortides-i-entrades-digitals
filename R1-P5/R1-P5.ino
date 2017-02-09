/*******************************************************************************
**                                                                            **      
**                           TITOL: R1 ARRAY DE 8 LEDs - P5                   **
**                                                                            **  
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 01/02/2017  **
*******************************************************************************/
//**********************************INCLUDE*************************************

//*********************************VARIABLES************************************
int led1 = 5;
int led2 = 6;
int led3 = 7;
int led4 = 8;
int polsador = 2;
//***********************************SETUP**************************************
void setup () {
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (led3, OUTPUT);
  pinMode (led4, OUTPUT);
  pinMode (polsador, OUTPUT);
}
//************************************LOOP**************************************
void loop () {

  if (digitalRead, (polsador)){
  digitalWrite (led1, LOW);
  digitalWrite (led2, LOW);
  digitalWrite (led3, LOW);
  digitalWrite (led4, LOW);
  }else{
  digitalWrite (led1, LOW);
  digitalWrite (led2, LOW);
  digitalWrite (led3, LOW);
  digitalWrite (led4, LOW);
  }
  delay (500);
  
  if (digitalRead, (polsador)){
  digitalWrite (led1, HIGH);
  }else{ 
  digitalWrite (led2, LOW);
  digitalWrite (led1, LOW);
  digitalWrite (led3, LOW);
  digitalWrite (led4, LOW);
  }
  delay (500);

  if (digitalRead, (polsador)){
  digitalWrite (led2, HIGH);
  }else{
  digitalWrite (led1, LOW);
  digitalWrite (led2, LOW);
  digitalWrite (led3, LOW);
  digitalWrite (led4, LOW);
  }
  delay (500);
}
//**********************************FUNCIONS************************************
