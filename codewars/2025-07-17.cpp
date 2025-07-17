/*
Después de un trimestre difícil en la oficina, decides tomarte unas vacaciones para descansar. Así que reservas un vuelo para ti y tu novia e intentas dejar atrás todos los problemas.

Necesitarás un coche de alquiler para poder moverte durante tus vacaciones. El gerente de la empresa de alquiler de coches te hace algunas ofertas interesantes.

Cada día que alquilas el coche cuesta 40 $. Si alquilas el coche durante 7 días o más, obtienes un descuento de 50 $ sobre el total. Alternativamente, si alquilas el coche durante 3 días o más, obtienes un descuento de 20 $ sobre el total.

Escribe un código que dé el importe total para diferentes días (d).
*/

int rental_car_cost(int days, int rental_price = 40){
    int total = days * rental_price;
    if(days >= 7){
        total -= 50;
    } else if(days >= 3){
        total -= 20;
    }
    return total;
}
