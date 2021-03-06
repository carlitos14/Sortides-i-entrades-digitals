/*******************************************************************************
**                                                                            **
**                           TITOL: R3-P1                                     **
**                                                                            **
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 08/02/2017  **
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
  
  digitalWrite(segA, HIGH);  
  digitalWrite(segB, HIGH);     
  digitalWrite(segC, HIGH);     
  digitalWrite(segD, HIGH);     
  digitalWrite(segE, HIGH); 
  digitalWrite(segF, HIGH);    
  digitalWrite(segG, LOW);      

  delay(pausa);               
}
//************************************LOOP**************************************
void loop () {
  digitalWrite(segA, LOW);    // número 1         
  digitalWrite(segD, LOW);     
  digitalWrite(segE, LOW);     
  digitalWrite(segF, LOW);    // segments ON: B, C     
  
  delay(pausa);              
  
  digitalWrite(segA, HIGH);   // número 2          
  digitalWrite(segC, LOW);     
  digitalWrite(segD, HIGH);     
  digitalWrite(segE, HIGH);     
  digitalWrite(segG, HIGH);   // segments ON: A, B, D, E i G   
    
  delay(pausa);               
  
  digitalWrite(segC, HIGH);   // número 3          
  digitalWrite(segE, LOW);    // segments ON: A, B, C, D i G 
    
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segA, LOW);    // número 4    
  digitalWrite(segD, LOW);     
  digitalWrite(segF, HIGH);   // segments ON: B, C, F i G  
      
  delay(pausa);              
  
  digitalWrite(segA, HIGH);   // número 5 
  digitalWrite(segB, LOW); 
  digitalWrite(segD, HIGH);   // segments ON: A, C, D, F i G
        
  delay(pausa);               
  
  digitalWrite(segA, LOW);    // número 6        
  digitalWrite(segE, HIGH);   // segments ON: C, D, E, F i G 
          
  delay(pausa);               
  
  digitalWrite(segA, HIGH);   // número 7
  digitalWrite(segB, HIGH);  
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);    // segments ON: A, B i C
            
  delay(pausa);               
  
  digitalWrite(segD, HIGH);   // número 8  
  digitalWrite(segE, HIGH); 
  digitalWrite(segF, HIGH);    
  digitalWrite(segG, HIGH);   // segments ON: A, B, C, D, E, F i G
              
  delay(pausa);               
  
  digitalWrite(segD, LOW);    // número 9
  digitalWrite(segE, LOW);    // segments ON: A, B, C, F i G
                
  delay(pausa);               
  
  digitalWrite(segD, HIGH);   // número 0    
  digitalWrite(segE, HIGH);    
  digitalWrite(segG, LOW);    // segments ON: A, B, C, D, E i F   

  delay(pausa);                  
}
//**********************************FUNCIONS************************************
