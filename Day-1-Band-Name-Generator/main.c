#include <stdio.h>


int main() {

    char city[50];
    char pet[50];
    char band_name[50];

    printf("Welcome to the Band Name Generator!");

    printf("What's the name of the city you grew up in?\n");
    scanf("%s", city);

    printf("Awesome! And what's your pet's name?\n");
    scanf("%s", pet);

    sprintf(band_name, "%s %s", city, pet);
    printf("Your band name could be %s\n", band_name);

    return 0;
}