/*
 *  Hispalis RobIOTICS Arduino Trainer 
 *  
 *  Programa: Semaforo ( version 2 )
 *  
 *  Proposito:
 *  
 *      1)    Ajusta los tiempos de encendido
 *      2)    Define constantes como parametros
 *      3)    Prepara el codigo para crear procedimientos
 *      
 *      *)    Elementos de Programacion:#define
 *      
 *  Version: ArduinoTrainer v1.0
 *  Revision:Octubre 2017 
 *  
 */
#include "ArduinoTrainer.h"

#define T_RED_ON        5000 
#define T_RED_OFF        100 
#define T_GREEN_ON      2000
#define T_GREEN_OFF      100 
#define T_YELLOW_ON     3000
#define T_YELLOW_OFF     100 

#define T_PAUSE          100


void loop() 
{
  //    Enciende y Apaga la luz verde del semaforo
  digitalWrite( LED_VERDE , HIGH );
  delay( T_GREEN_ON );
  digitalWrite( LED_VERDE , LOW );
  delay( T_GREEN_OFF );
  
  //    Enciende y Aapaga la luz amarilla del semaforo
  digitalWrite( LED_AMARILLO , HIGH );
  delay( T_YELLOW_ON );
  digitalWrite( LED_AMARILLO , LOW );
  delay( T_YELLOW_OFF );

  //    Enciende y Apaga la luz roja del semaforo
  digitalWrite( LED_ROJO , HIGH );
  delay( T_RED_ON );
  digitalWrite( LED_ROJO , LOW );
  delay( T_RED_OFF );
}

