/*
Estabas acampando con tus amigos lejos de casa, pero cuando llega el momento de volver, te das cuenta de que te estás quedando sin combustible y la gasolinera más cercana está a 50 millas de distancia. Sabes que, de media, tu coche consume unas 25 millas por galón. Te quedan 2 galones.

Teniendo en cuenta estos factores, escribe una función que te diga si es posible llegar a la gasolinera o no.

La función debe devolver verdadero si es posible y falso si no lo es.

----
No teniea idea de que es uint32_t
uint32_t = es un numero entero positivo o igual a 0 que puede ser muy grande
u: unsigned (sin signo, o sea, no puede ser negativo)
int: integer (entero)
32: 32 bits (puede guardar números grandes)
_t: type (tipo)

mpg --> millas por galon
*/

bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left){
    return ((mpg * fuel_left) >= distance_to_pump);
}
 /*
 Antigua Solucion:
 using namespace std;
bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left){
if((distance_to_pump >= 0) && (fuel_left >= 2) && (fuel_left >= 0) ){
    bool zero_fuel = true;
} else{
    bool zero_fuel = false;
}

 */
