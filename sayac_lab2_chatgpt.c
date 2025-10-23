/*
Author: Saya Cottle
Course: CS 125
Assignment: Lab 2 (Chat GPT Edition)
Date: 09/17/2025
References: Chat GPT
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int lower_bound, upper_bound, cycles, rando, count;

    // Seed the random number generator
    srand(time(NULL));

    // Prompt user for input
    printf("Enter a lower bound and the number of cycles:\n");

    // Input validation loop
    while (scanf("%d%d", &lower_bound, &cycles) != 2 || cycles <= 0) {
        printf("Invalid input. Please enter an integer lower bound and a positive number of cycles:\n");

        // Clear input buffer
        while (getchar() != '\n');
    }

    // Calculate upper bound
    upper_bound = (cycles % 6) + lower_bound;

    printf("Random numbers will be generated in the range [%d, %d].\n", lower_bound, upper_bound);

    // Generate and print random numbers
    for (count = 0; count < cycles; count++) {
        rando = (rand() % (upper_bound - lower_bound + 1)) + lower_bound;
        printf("Cycle %d: %d\n", count + 1, rando);
    }

    return 0;
}