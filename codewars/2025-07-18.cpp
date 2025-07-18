/*
Crea una función finalGrade que calcule la nota final de un estudiante en función de dos parámetros: la nota del examen y el número de proyectos completados.

Esta función debe tomar dos argumentos: exam: nota del examen (de 0 a 100); projects: número de proyectos completados (de 0 en adelante).

Esta función debe devolver un número (nota final). Hay cuatro tipos de notas finales:

100, si la nota del examen es superior a 90 o si el número de proyectos completados es superior a 10.
90, si la nota del examen es superior a 75 y si el número de proyectos completados es mínimo de 5.
75, si la nota del examen es superior a 50 y si el número de proyectos completados es mínimo de 2.
0, en los demás casos
Ejemplos (entradas --> salida):

100, 12 --> 100
99, 0 --> 100
10, 15 --> 100

85, 5 --> 90

55, 3 --> 75

55, 0 --> 0
20, 2 --> 0

*/

int final_grade(int exam, int projects){
    int nota_final = 0;
    if(exam > 90 || projects > 10){
        nota_final = 100;
    } else if(exam > 75 && projects >= 5){
        nota_final = 90;
    } else if(exam > 50 && projects >= 2){
        nota_final = 75;
    }
    return nota_final;
}

