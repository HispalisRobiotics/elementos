/*
 *  Hispalis RobIOTICS Arduino Trainer 
 *  
 *  Programa: triple Blynk 
 *  
 *  Proposito:
 *  
 *      1)    Introduce el concepto de constante de preprocesador #define
 *      2)    Hace parpadear los tres LEDs  
 *      
 *      *)    Estilo de Programacion: Constantes de Preporcesador
 *      
 *  Version: ArduinoTrainer v1.0
 *  Revision:Octubre 2017 
 *  
 */

#define LED_ROJO          3
#define LED_AMARILLO      5
#define LED_VERDE         6



void setup() 
{
  pinMode( LED_ROJO , OUTPUT );
  pinMode( LED_AMARILLO , OUTPUT );
  pinMode( LED_VERDE , OUTPUT );
}




void loop() 
{
  digitalWrite( LED_ROJO , HIGH );
  delay( 1000 );
  digitalWrite( LED_ROJO , LOW );
  delay( 1000 );
  digitalWrite( LED_AMARILLO , HIGH );
  delay( 1000 );
  digitalWrite( LED_AMARILLO , LOW );
  delay( 1000 );
  digitalWrite( LED_VERDE , HIGH );
  delay( 1000 );
  digitalWrite( LED_VERDE , LOW );
  delay( 1000 );
}

