/*******************************************************************************
**                                                                            **
**                           TITOL: R4 - P2                                   **
**                                                                            **
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 22/02/2017  **
*******************************************************************************/
//**********************************INCLUDE*************************************

//*********************************VARIABLES************************************
const int leds4 = 5;         
const int leds3 = 6;          
const int leds2 = 7;          
const int led1 = 8;           
const int buttonPin = 2;      
boolean buttonEstat = LOW;   
int num = 1;
//***********************************SETUP**************************************
void setup()
{
  pinMode(leds4, OUTPUT);     
  pinMode(leds3, OUTPUT);     
  pinMode(leds2, OUTPUT);     
  pinMode(led1, OUTPUT); 
  pinMode(buttonPin, INPUT);     
  
  digitalWrite(leds4, LOW);  
  digitalWrite(leds3, LOW);   
  digitalWrite(leds2, LOW);   
  digitalWrite(led1, LOW);   
}
//************************************LOOP**************************************
void loop()
{
  buttonEstat = digitalRead(buttonPin);
  if (buttonEstat == HIGH)
  { 
    num = random(1,7);
    digitalWrite(leds2,LOW);
    digitalWrite(leds3,LOW);
    digitalWrite(leds4,LOW);
    digitalWrite(led1,LOW);
  }
  switch(num)
  {
    case 1:
      digitalWrite(led1, HIGH);    // mostrar el 1
      break;
    case 2:      
      digitalWrite(leds2, HIGH);   // mostrar el 2  
      break;
    case 3:  
      digitalWrite(led1, HIGH);    // mostrar el 3
      digitalWrite(leds3, HIGH);  
      break;
    case 4:   
      digitalWrite(leds2, HIGH);   // mostrar el 4
      digitalWrite(leds3, HIGH); 
      break;
    case 5:
      digitalWrite(leds2, HIGH);   // mostrar el 5
      digitalWrite(leds3, HIGH);
      digitalWrite(led1, HIGH);    
      break;
    case 6:      
      digitalWrite(leds2, HIGH);   // mostrar el 6
      digitalWrite(leds3, HIGH);
      digitalWrite(leds4, HIGH);
      break;  
  }
}
//**********************************FUNCIONS************************************
