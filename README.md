# Laboratorio 4 -Punteros-

El siguiente ejercicio es para desarrollar los conocimientos en:

- Clase y Objetos
- Casting de objetos
- Archivos de implementación y encabezado
- UML
- Condicionales
- Ciclos
- Manejo de Strings
- CONSTANTES
- Arreglos
- Punteros

## 

## Contexto

Desarrollar una aplicación que muestre en pantalla el detalle de un **Empleado**, el empleado tiene las siguientes características un identificador único del empleado, el nombre, numero de empleado, años de experiencia, un salario base y una bandera que identifica si tiene que revisarse o no. 

El arquitecto del sistema, sugiere que las propiedades sean de un acceso intermedio, o sea que no sean totalmente públicas. 

Adicionalmente se dice que cada vez que se crea una instancia del objeto **Empleado**, se debe generar automaticamente un **número identificador aleatorio** que no supere el número 100; esto quiere decir que los numeros de identificación deben de ser entre 1 y 100.

**Existen dos procesos restringidos:**

- **Proceso 1**. Aumentar el salario dependiendo de los años de experiencia.
  - Si el empleado tiene 1 y menos de 3 años de experiencia se le debe aumentar por cada año un 2% sobre el salario base.
  - Si el empleado tiene 3 o más años se le debe aumentar por cada año un 5% sobre el salario base.
- **Proceso 2**. Hacer un proceso de revisión aleatorio, esto quiere decir que si por casualidad el empleado sale favorecido con una revision el resultado debe de ser `true`, en caso contrarío `false`. Este proceso no retorna nada simplemente cambia el valor de la variable de entrada.

**IMPORTANTE**

> En ambos procesos se deben pasar los argumentos utilizando punteros o por referencia a la memoria o al puntero

**Existe un proceso totalmente visible por todas las clases:**

- Proceso para obtener el detalle de cada uno de los empleados, el resultado debe de imprimirse en pantalla. Un ejemplo de un resultado para un empleado es el siguiente:

```c++
"Empleado # [ 7 ]\n\tNombre [ Mike ]\n\tAños de experiencia [ 2 ]\n\tSalario Inicial [ 1200000.000000 ]\n\tSalario Acumulado [ 1248480.000000 ]\n\tNecesita revision [ Si ]\n"
```

**Datos de entrada**

- Se debe crear un arreglo de tipo empleado con los siguientes valores:

| Nombre    | Años de Experiencia | Salario Base |
| --------- | ------------------- | ------------ |
| Mike      | 2                   | 1200000      |
| Sebastian | 3                   | 1600000      |
| Carolina  | 8                   | 1800000      |
| Emma      | 1                   | 800000       |

- Se debe imprimir en pantalla todos los datos de cada uno de los empleados similar a este:

```c++
Empleado # [ 7 ]
	Nombre [ Mike ]
	Años de experiencia [ 2 ]
	Salario Inicial [ 1200000.000000 ]
	Salario Acumulado [ 1248480.000000 ]
	Necesita revision [ Si ]

Empleado # [ 49 ]
	Nombre [ Sebastian ]
	Años de experiencia [ 3 ]
	Salario Inicial [ 1600000.000000 ]
	Salario Acumulado [ 1747872.000000 ]
	Necesita revision [ Si ]

Empleado # [ 73 ]
	Nombre [ Carolina ]
	Años de experiencia [ 8 ]
	Salario Inicial [ 1800000.000000 ]
	Salario Acumulado [ 2509624.250000 ]
	Necesita revision [ Si ]

Empleado # [ 1680065493 ]
	Nombre [ Emma ]
	Años de experiencia [ 1 ]
	Salario Inicial [ 800000.000000 ]
	Salario Acumulado [ 816000.000000 ]
	Necesita revision [ Si ]
```

## Objetivo

1. Hacer el diagrama UML
2. Desarrollar el sistema
   1. Se debe de incluir una o varias constantes
   2. Se deben usar métodos privados que pasen los datos por argumentos de tipo puntero o referencia.
3. Subir los cambios al GitHub

------

[Página de Inicio](https://github.com/mikeguzman/EIF201-Progra-I)

