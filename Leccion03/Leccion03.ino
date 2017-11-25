/*
 *  Hispalis RobIOTICS Arduino Trainer 
 *  
 *  Programa: Semaforo
 *  
 *  Proposito:
 *  
 *      1)    Introduce el concepto de fichero de cabecera
 *      2)    Mueve la funcion setup() al fichero de cabecera
 *      3)    Organiza el encendido de los LEDS para simular un 
 *            semaforo
 *            
 *      *)    Estilo de Programacion: Comentarios
 *      
 *  Version: ArduinoTrainer v1.0
 *  Revision:Octubre 2017 
 *  
 */
#include "ArduinoTrainer.h"






void loop() 
{
  //    Enciende y Apaga la luz verde del semaforo
  digitalWrite( LED_VERDE , HIGH );
  delay( 1000 );
  digitalWrite( LED_VERDE , LOW );
  delay( 1000 );

  //    Enciende y Aapaga la luz amarilla del semaforo
  digitalWrite( LED_AMARILLO , HIGH );
  delay( 1000 );
  digitalWrite( LED_AMARILLO , LOW );
  delay( 1000 );

  //    Enciende y Apaga la luz roja del semaforo
  digitalWrite( LED_ROJO , HIGH );
  delay( 1000 );
  digitalWrite( LED_ROJO , LOW );
  delay( 1000 );
}

