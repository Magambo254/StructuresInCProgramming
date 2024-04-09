#include <stdio.h>
#include "function.h"

// Function called from function header file and had been declared at main.c-----IMPLEMENTATION
void addRestaurants(struct Restaurant *restaurantsArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Restaurant %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", restaurantsArray[i].name); 
        printf("Location: ");
        scanf("%s", restaurantsArray[i].location); 
        printf("Website: ");
        scanf("%s", restaurantsArray[i].website); 
        printf("Rating (out of 5): ");
        scanf("%d", &restaurantsArray[i].rating);
        printf("Price Range: ");
        scanf("%s", restaurantsArray[i].priceRange); 
    }
}

// Function to print the structure elements
void printRestaurants(struct Restaurant *restaurantsArray, int arraySize) {
    printf("\nRestaurant Details:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Restaurant %d:\n", i + 1);
        printf("Name: %s\n", restaurantsArray[i].name);
        printf("Location: %s\n", restaurantsArray[i].location);
        printf("Website: %s\n", restaurantsArray[i].website);
        printf("Rating: %d/5\n", restaurantsArray[i].rating);
        printf("Price Range: %s\n", restaurantsArray[i].priceRange);
    }
}

