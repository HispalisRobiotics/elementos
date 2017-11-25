/*
 *  Hispalis RobIOTICS Arduino Trainer 
 *  
 *  Programa: Blynk 
 *  
 *  Proposito:
 *  
 *      Programa Blynk clasico
 *      
 *  Version: ArduinoTrainer v1.0
 *  Revision:Octubre 2017 
 *  
 */

void setup() 
{
  pinMode( 3 , OUTPUT );
}





void loop() 
{
  digitalWrite( 3 , HIGH );
  delay( 1000 );
  digitalWrite( 3 , LOW );
  delay( 1000 );
}

