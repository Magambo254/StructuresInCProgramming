#ifndef FUNCTION_H
#define FUNCTION_H

struct Restaurant {
    char name[100];
    char location[100];
    char website[100];
    int rating;
    char priceRange[20];
};

void addRestaurants(struct Restaurant *restaurantsArray, int arraySize);
void printRestaurants(struct Restaurant *restaurantsArray, int arraySize);

#endif

