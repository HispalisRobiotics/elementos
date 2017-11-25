/*
 *  Hispalis RobIOTICS Arduino Trainer 
 *  
 *  Programa: Semaforo ( version 2 )
 *  
 *  Proposito:
 *  
 *      1)    Uso de procedimientos
 *              - Definicion ( prototipo )
 *              - Declaracion
 *              - Llamada
 *              
 *      
 *      *)    Elementos de Programacion:Procedimientos
 *      
 *  Version: ArduinoTrainer v1.0
 *  Revision:Octubre 2017 
 *  
 */
#include "ArduinoTrainer.h"

//  Prototipos  ( Definiciones )
void LuzVerde( void );
void LuzAmarilla( void );
void LuzRoja( void );



void loop() 
{
  void LuzVerde();
  void LuzAmarilla();
  void LuzRoja();
}


void LuzVerde( void )
{
//    Enciende y Apaga la luz verde del semaforo
  digitalWrite( LED_VERDE , HIGH );
  delay( T_GREEN_ON );
  digitalWrite( LED_VERDE , LOW );
  delay( T_GREEN_OFF );
  
}


void LuzAmarilla( void )
{
  //    Enciende y Aapaga la luz amarilla del semaforo
  digitalWrite( LED_AMARILLO , HIGH );
  delay( T_YELLOW_ON );
  digitalWrite( LED_AMARILLO , LOW );
  delay( T_YELLOW_OFF );
}


void LuzRoja( void )
{
  //    Enciende y Apaga la luz roja del semaforo
  digitalWrite( LED_ROJO , HIGH );
  delay( T_RED_ON );
  digitalWrite( LED_ROJO , LOW );
  delay( T_RED_OFF );
}
