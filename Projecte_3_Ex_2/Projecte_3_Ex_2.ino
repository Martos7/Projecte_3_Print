/*************************************************************************
**                                                                      **
**    Programa 2                                                        **
**                                                                      **
*************************************************************************/
//Raúl Martos

int thisByte = 33; 

void setup() 
{ 
  Serial.begin(9600); 
  Serial.println("ASCII Table ~ Character Map"); 
} 

void loop()
{ 
  Serial.write(thisByte);    
  
  Serial.print(", dec: "); 
  Serial.print(thisByte);      
  Serial.print(", hex: "); 
  Serial.print(thisByte, HEX);     
  Serial.print(", oct: "); 
  Serial.print(thisByte, OCT);     
  Serial.print(", bin: "); 
  Serial.println(thisByte, BIN);   

  if(thisByte == 126)  // if printed last visible character '~'
  { 
    while(true)
    { 
    } 
  } 
  thisByte++;     // go on to the next character

} 

// Aquest programa el que fa és començar a fer una taula en la qual hi posa el símbol que és el numero en binari, decimal,... apartir del numero 33 i  va sumant 1 fins a 126.
