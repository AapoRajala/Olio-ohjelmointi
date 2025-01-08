#include <stdio.h>

int main()
{
 /* TASK 1
  * Kirjoita esimerkit muuttujan määrittelyssä
  * Kokonaislukuna, liukulukuna ja merkkitietona
  * *****/

 //Luo kokonaisluku muuttujalle
 int number1 = 5;
 //Luo liukulukumuuttuja
 float number2;
 number2 = 2.25; //desimaalit erotetaan pisteellä
 //Luo merkkitietomuuttuja
 char character1= 'c';

 //Tulostetaan muuttujat
 printf("\nnumber1 value is %d\n", number1);
 printf("\nnumber2 value is %.2f\n", number2);
 printf("\ncharacter1 value is %c\n\n\n", character1);


 /* TASK 2
  * Tee C-kielinen ohjelma, joka muuntaa antamasi lämpötilann (Celsius asteina)
  * Farenheit asteiksi
  * Tulostusesimerkki
  *
  * Antamasi lämpötila ?? on farenheit asteina ??.
  * ******/

 //Tulosta otsikko
 printf("Tempeture in celsius ");
 //Luo muuttujat float komennolla
 float tempetureCelsius;
 float tempetureFahrenheit;
 // Lue käyttäjän syöttämä luku
 scanf("%f", &tempetureCelsius);
 printf("you entered (%f C).\n\n", tempetureCelsius);
 // Muunna Celsiukset Fahrenheiksi  °F = °C × (9/5) + 32.
 tempetureFahrenheit = (tempetureCelsius * 9/5 + 32);
 printf("Temperature you entered (%.1f C) is %.1f in fahrenheit.\n\n", tempetureCelsius, tempetureFahrenheit);

/* TASK 3
 *
 * Tee ohjelma joka laskee suorakulmaisen kolmion alan kun kanta on 7m ja korkeus 4m ja tulsotaa tämän vastauksen
 * Kolmion pinta-alan laskuun käytetään kaavaa (kanta * Korkeus : 2)

**/

 printf("Ilmoita kolmion kanta \n");
 float triangleHeight;
 float triangleWidth;
 float triangleSurface;
 scanf("%f", &triangleWidth);
 printf("Ilmoita kolmion korkeus \n");
 scanf("%f", &triangleWidth);
 triangleSurface( =  triangleHeight * triangleWidth / 2);
 printf("Kolmion pinta-ala on %.1f\n", triangleSurface);






    return 0;
}

