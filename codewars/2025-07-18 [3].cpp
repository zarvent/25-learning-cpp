#include <cassert>
#include <iostream>

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
    else if(exam > EXAMS_TIER_2 && projects >= PROJECTS_TIER_2){
        return FINAL_GRADE_TIER_2;
    }
    else if(exam > EXAMS_TIER_3 && projects >= PROJECTS_TIER_3){
        return FINAL_GRADE_TIER_3;
    }
    return DEFAULT_GRADE;
}

int main(){
    int student_exam_score;
    int student_projects_score;

    std::cout << "Bienvenido, Introduce la nota de tu examen y los proyectos realizados: \n";
    std::cin >> student_exam_score >> student_projects_score;

    int calculated_grade = final_grade(student_exam_score, student_projects_score);

    std::cout << "Nota final calculada: " << calculated_grade << std::endl;
    return 0;
}
