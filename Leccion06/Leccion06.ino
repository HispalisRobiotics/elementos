/*
 *  Hispalis RobIOTICS Arduino Trainer 
 *  
 *  Programa: Semaforo ( version 2 )
 *  
 *  Proposito:
 *  
 *      1)    Uso de Funciones
 *              - Definicion ( prototipo )
 *              - Declaracion
 *              - Llamada
 *              - Paso por valor
 *                            
 *      
 *      *)    Elementos de Programacion:Funciones
 *      
 *  Version: ArduinoTrainer v1.0
 *  Revision:Octubre 2017 
 *  
 */
#include "ArduinoTrainer.h"

//  Prototipos
void Luz( int color , int t_on , int t_off );     //Esto vale



void loop() 
{
  Luz( LED_VERDE , T_GREEN_ON , T_GREEN_OFF );
  Luz( LED_AMARILLO , T_YELLOW_ON , T_YELLOW_OFF );
  Luz( LED_ROJO , T_RED_ON , T_RED_OFF );
}




void Luz( int color , int t_on , int t_off )
{
  //    Enciende y Aapaga la luz amarilla del semaforo
  digitalWrite( color , HIGH );
  delay( t_on  );
  digitalWrite( color , LOW );
  delay( t_off );
}



