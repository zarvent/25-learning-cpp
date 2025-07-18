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

Version 2 del ejercicio
*/

//constexpr int declara una variable entera como una constante que puede ser evaluada por el compilador antes de que el programa se ejecute, permitiendo mayores optimizaciones.

constexpr int EXAMS_TIER_1 = 90;
constexpr int PROJECTS_TIER_1 = 10;
constexpr int FINAL_GRADE_TIER_1 = 100;

constexpr int EXAMS_TIER_2 = 75;
constexpr int PROJECTS_TIER_2 = 5;
constexpr int FINAL_GRADE_TIER_2 = 90;

constexpr int EXAMS_TIER_3 = 50;
constexpr int PROJECTS_TIER_3 = 2;
constexpr int FINAL_GRADE_TIER_3 = 75;

constexpr int DEFAULT_GRADE = 0;
int final_grade(int exam, int projects){


    // La siguiente 2 lineas fueron copiadas
    assert(exam >= 0 && exam <= 100 && "La nota del examen debe estar entre 0 y 100");
    assert(projects >= 0 && "El número de proyectos no puede ser negativo");
    // Hasta donde entendi lo que hacen estas 2 lineas es que antes de trabajar con exam y projects validan que esten entre el rango permitido, asi se asegura que los datos sean correctos y reduce la posibilidad de fallos ya que podemos trabajar sabiendo que los datos introducidos estan en el rango que establecimos


    if(exam > EXAMS_TIER_1 || projects > PROJECTS_TIER_1){
        return FINAL_GRADE_TIER_1;
    }
    if(exam > EXAMS_TIER_2 && projects >= PROJECTS_TIER_2){
        return FINAL_GRADE_TIER_2;
    }
    if(exam > EXAMS_TIER_3 && projects >= PROJECTS_TIER_3){
        return FINAL_GRADE_TIER_3;
    }
    return DEFAULT_GRADE;
}
