/*******************************************************************************
**                                                                            **
**                           TITOL: R3-P2                                     **
**                                                                            **
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 09/02/2017  **
*******************************************************************************/
//**********************************INCLUDE*************************************

//*********************************VARIABLES************************************
const int segA = 5;          
const int segB = 6;          
const int segC = 7;          
const int segD = 8;          
const int segE = 9;          
const int segF = 10;         
const int segG = 11;
         
const int buttonPin = 2; 
boolean buttonState = LOW
; 
int num = 0;       
//***********************************SETUP**************************************
void setup () 
{
  pinMode(segA, OUTPUT);     
  pinMode(segB, OUTPUT);     
  pinMode(segC, OUTPUT);     
  pinMode(segD, OUTPUT);     
  pinMode(segE, OUTPUT);     
  pinMode(segF, OUTPUT);     
  pinMode(segG, OUTPUT); 
  pinMode(buttonPin, INPUT);    
  
  digitalWrite(segA, LOW);  
  digitalWrite(segB, LOW);     
  digitalWrite(segC, LOW);     
  digitalWrite(segD, LOW);     
  digitalWrite(segE, LOW); 
  digitalWrite(segF, LOW);    
  digitalWrite(segG, LOW);                    
}
//************************************LOOP**************************************
void loop () {
  delay (500);
  buttonState = digitalRead(buttonPin);
  if(buttonState == HIGH)
  {
    num = num + 1;
    if (num == 10) num = 0;
  }
  switch(num)
  {
  case 0: 
  digitalWrite(segA, HIGH);   // número 0
  digitalWrite(segB, HIGH);     
  digitalWrite(segC, HIGH);     
  digitalWrite(segD, HIGH);     
  digitalWrite(segE, HIGH); 
  digitalWrite(segF, HIGH);    
  digitalWrite(segG, LOW);  
  break;

  case 1:
  digitalWrite(segA, LOW);    // número 1         
  digitalWrite(segD, LOW);     
  digitalWrite(segE, LOW);     
  digitalWrite(segF, LOW);    // segments ON: B, C     
  break;              

  case 2:
  digitalWrite(segA, HIGH);   // número 2          
  digitalWrite(segC, LOW);     
  digitalWrite(segD, HIGH);     
  digitalWrite(segE, HIGH);     
  digitalWrite(segG, HIGH);   // segments ON: A, B, D, E i G   
  break;               

  case 3:
  digitalWrite(segC, HIGH);   // número 3          
  digitalWrite(segE, LOW);    // segments ON: A, B, C, D i G 
  break;               

  case 4:
  digitalWrite(segA, LOW);    // número 4    
  digitalWrite(segD, LOW);     
  digitalWrite(segF, HIGH);   // segments ON: B, C, F i G  
  break;              

  case 5:
  digitalWrite(segA, HIGH);   // número 5 
  digitalWrite(segB, LOW); 
  digitalWrite(segD, HIGH);   // segments ON: A, C, D, F i G
  break;               

  case 6:
  digitalWrite(segA, LOW);    // número 6        
  digitalWrite(segE, HIGH);   // segments ON: C, D, E, F i G 
  break;               

  case 7:
  digitalWrite(segA, HIGH);   // número 7
  digitalWrite(segB, HIGH);  
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);    // segments ON: A, B i C
  break;               

  case 8:
  digitalWrite(segD, HIGH);   // número 8  
  digitalWrite(segE, HIGH); 
  digitalWrite(segF, HIGH);    
  digitalWrite(segG, HIGH);   // segments ON: A, B, C, D, E, F i G
  break;               

  case 9:
  digitalWrite(segD, LOW);    // número 9
  digitalWrite(segE, LOW);    // segments ON: A, B, C, F i G
  break;                                
  }
}
//**********************************FUNCIONS************************************
