/*******************************************************************************
**                                                                            **
**                           TITOL: R5 - P2                                   **
**                                                                            **
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 28/02/2017  **
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

int num = 1; 
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
  buttonEstat = digitalRead (buttonPin);    // REVISAR
  if (buttonEstat == HIGH)
  {
    num = random (1,10);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(niv1, HIGH);
    digitalWrite(niv2, HIGH);
    digitalWrite(niv3, HIGH);
  }
  switch(num)
  {
    case 1:
      digitalWrite(led1, HIGH);
      break;
    case 2:
      digitalWrite(led2, HIGH);
      break;
    case 3:
      digitalWrite(led3, HIGH);
      break;
    case 4:
      digitalWrite(led4, HIGH);
      break;
    case 5:
      digitalWrite(led5, HIGH);
      break;
    case 6:
      digitalWrite(led6, HIGH);
      break;
    case 7:
      digitalWrite(led7, HIGH);
      break;
    case 8:
      digitalWrite(led8, HIGH);
      break;
    case 9:
      digitalWrite(led9, HIGH);
      break;
  }
}
//**********************************FUNCIONS************************************
