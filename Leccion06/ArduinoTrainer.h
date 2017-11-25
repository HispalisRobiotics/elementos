/*
 *  Hispalis RobIOTICS Arduino Trainer 
 *  
 *  Programa: ArduinoTrainer.h
 *  
 *  Proposito:
 *  
 *      1)    Interfaz con hardware
 *      2)    Define constantes para los pines de Arduino
 *      3)    Prototipos para funciones 
 *      
 *  Version: ArduinoTrainer v1.0
 *  Revision:Octubre 2017 
 *  
 */

#define LED_ROJO          3
#define LED_AMARILLO      5
#define LED_VERDE         6



#define T_RED_ON        5000 
#define T_RED_OFF        100 
#define T_GREEN_ON      2000
#define T_GREEN_OFF      100 
#define T_YELLOW_ON     3000
#define T_YELLOW_OFF     100 



void setup() 
{
  pinMode( LED_ROJO , OUTPUT );
  pinMode( LED_AMARILLO , OUTPUT );
  pinMode( LED_VERDE , OUTPUT );
}




