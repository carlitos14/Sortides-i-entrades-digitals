/*******************************************************************************
**                                                                            **
**                           TITOL: R4 - P1                                   **
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

int pausa = 2000;                         
//***********************************SETUP**************************************
void setup()
{
  pinMode(leds4, OUTPUT);     
  pinMode(leds3, OUTPUT);     
  pinMode(leds2, OUTPUT);     
  pinMode(led1, OUTPUT);      
  
  digitalWrite(leds4, LOW);  
  digitalWrite(leds3, LOW);   
  digitalWrite(leds2, LOW);   
  digitalWrite(led1, HIGH);   
  
  delay(pausa);
}
//************************************LOOP**************************************
void loop()
{
  digitalWrite(led1, LOW);    // 2
  digitalWrite(leds2, HIGH);  
  
  delay(pausa);
  
  digitalWrite(leds2, LOW);  // 3  
  digitalWrite(led1, HIGH); 
  digitalWrite(leds3, HIGH);  
  
  delay(pausa);
  
  digitalWrite(led1, LOW);  // 4  
  digitalWrite(leds2, HIGH); 
  
  delay(pausa);
  
  digitalWrite(led1, HIGH);  // 5 
  
  delay(pausa);
  
  digitalWrite(led1, LOW);    // 6
  digitalWrite(leds4, HIGH);
    
  delay(pausa);
  
  digitalWrite(leds4, LOW);   // 1
  digitalWrite(leds3, LOW);   
  digitalWrite(leds2, LOW);  
  digitalWrite(led1, HIGH);   
  
  delay(pausa);
}
//**********************************FUNCIONS************************************
