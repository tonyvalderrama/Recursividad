# Recursividad
Ejemplos del uso de recursión en C++

### factorial.cpp
Cálculo del factorial de un número. Contiene una función recursiva y otra que no usa recursividad para comparar.

### Naturales.cpp
Ejemplo sencillo de una función que calcula la suma de todos los números naturales

### Secuencia.cpp
Recibe un número (n) del usuario.
 * Si n es par, divídelo entre 2
 * Si es impar, multiplícalo por 3 y súmale 1
 * La secuencia termina cuando N == 1

### Invertido.cpp
##### Problema
Dado un número entero positivo `N`, escribe una función recursiva que devuelva el número con sus dígitos en orden inverso.

##### Instrucciones
1. Pide al usuario un número entero positivo.
2. Implementa una función recursiva que reciba el número y devuelva su versión invertida.
3. Imprime el número invertido sin usar ciclos ni convertir el número a una cadena de texto (`string`).

##### Ejemplo de entrada y salida
**Entrada:**
```
Introduce un número entero positivo: 1234
```

**Salida esperada:**
```
Número invertido: 4321
```

##### Restricciones
- No puedes usar `string`, `vector` o arreglos para almacenar los dígitos.
- No puedes usar ciclos (`for`, `while`).
- La solución debe ser completamente recursiva.

### Merge2SortedLists.cpp
Resuelve el problema en https://leetcode.com/problems/merge-two-sorted-lists/

##### Problema
You are given the heads of two sorted linked lists list1 and list2.
Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.
Return the head of the merged linked list.

##### Ejemplo de entrada y salida
```
Example 1:
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]

Example 2:
Input: list1 = [], list2 = []
Output: []

Example 3:
Input: list1 = [], list2 = [0]
Output: [0]
```

##### Restricciones
- The number of nodes in both lists is in the range [0, 50].
- -100 <= Node.val <= 100
- Both list1 and list2 are sorted in non-decreasing order.
