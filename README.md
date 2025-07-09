# Grupo 4

Alumnos:
	- Fernando Folmer		(e2407)

&nbsp;	- Cesar Ezequiel Arce		(e2417)

&nbsp;	- Lucas Sebastián Kirschner	(e2409)



Sistemas Operativos de Tiempo Real II - Trabajo Práctico 1: Sistemas Reactivos



Problema

Se requiere implementar un sistema para el control de tres LEDs (rojo, verde y azul) mediante la activación de un botón.

El sistema debe responder de la siguiente forma:

Se debe detectar los siguientes estados del botón:.

Pulso: Si el botón se presiona entre 200 ms y 1000 ms.

Corto: Si el botón se presiona entre 1000 ms y 2000 ms.

Largo: Si el botón se presiona más de 2000 ms.

No presionado: para cualquier otro caso.

El LED rojo debe encenderse por 1 segundo si se detecta un botón pulso.

El LED verde debe encenderse por 1 segundo si se detecta un botón corto.

El LED azul debe encenderse por 1 segundo si se detecta un botón largo.



Requerimientos:

Cumplir con la descripción funcional del problema. Se requiere enviar un video de la solución para verificar el correcto funcionamiento. (2 pts)

Implementar tres bloques de procesamiento: uno para el botón, otro para la lógica del problema y otra para los LEDs. Ver figura.

Implementar una tarea para el procesamiento del botón.  (2 pts)

Implementar un objeto activo que realice el procesamiento del estado del botón y genera una acción sobre los LEDs. Este objeto activo se llamará Interfaz de Usuario. (2 pts)

Implementar un objeto activo por cada LED requerido. (2 pts)

Encapsular el funcionamiento de los objetos activos (1 pt)

Entregar un proyecto compatible con STM32CubeIDE (1 pt)

Utilizar el ejemplo sistemas\_reactivos\_tp1\_ejemplo de base provisto por la cátedra: link repositorio



