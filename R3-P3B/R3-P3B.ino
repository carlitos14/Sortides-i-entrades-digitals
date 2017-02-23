/*******************************************************************************
**                                                                            **
**                           TITOL: R3-P3                                     **
**                                                                            **
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: /02/2017    **
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
int pausa = 500;             
//***********************************SETUP**************************************
void setup () {
  pinMode(segA, OUTPUT);     
  pinMode(segB, OUTPUT);     
  pinMode(segC, OUTPUT);     
  pinMode(segD, OUTPUT);     
  pinMode(segE, OUTPUT);     
  pinMode(segF, OUTPUT);     
  pinMode(segG, OUTPUT);          

  delay(pausa);               
}
//************************************LOOP**************************************
void loop () {
  digitalWrite(segA, LOW);    // H        
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, LOW);     
  digitalWrite(segE, HIGH);     
  digitalWrite(segF, HIGH);      
  digitalWrite(segG, HIGH);
  
  delay(pausa);              
  
  digitalWrite(segA, HIGH);   // O              
  digitalWrite(segD, HIGH);          
  digitalWrite(segG, LOW);   
    
  delay(pausa);               
          
  digitalWrite(segA, LOW);  // L        
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);                
    
  delay(pausa);             
         
  digitalWrite(segD, LOW);    // I         
      
  delay(pausa);                            
}
//**********************************FUNCIONS************************************
