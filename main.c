#include <stdio.h>
#include "function.h"

int main() {
    int arraySize;
    printf("Enter the number of hotels desired");
    scanf("%d", &arraySize);
    struct Restaurant restaurantsArray[arraySize];

    // Populate the structure array
    addRestaurants(restaurantsArray, arraySize);

    // Print the structure elements
    printRestaurants(restaurantsArray, arraySize);

    return 0;
}

