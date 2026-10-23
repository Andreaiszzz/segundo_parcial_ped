# segundo_parcial_ped
¿Cuál es la complejidad temporal Big-O?
El algoritmo hace exactamente 3n operaciones. Como en Big-O se ignoran los números constantes (como el 3), decimos que su tiempo de ejecución crece de forma lineal con n, es decir, depende directamente de n.
2. Si n se duplica, ¿cómo cambia aproximadamente el número de comparaciones?
Como el costo crece de forma lineal, si el tamaño de la entrada n aumenta, el tiempo de ejecución sube en la misma parte. Por ejemplo, si n se duplica, el tiempo también se duplica.

2-1. ¿Cuál es la complejidad temporal Big-O
El bucle externo se repite n veces. Por cada vuelta, el bucle interno se ejecuta como la mitad de veces que n, porque avanza de dos en dos. Al juntar ambas cosas, el trabajo crece de forma cuadrática. Como en Big-O se ignoran las constantes, el resultado es O(n al cuadrado).
2-2 Si n se duplica, ¿cómo cambia aproximadamente el número de comparaciones?
Como la complejidad es cuadrática, O(n al cuadrado), si duplicamos el tamaño de la entrada, el número de operaciones se multiplica por 4. Es decir, el esfuerzo crece mucho más rápido que la entrada.
