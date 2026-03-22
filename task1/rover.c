#include <stdio.h>
#include <math.h>

int main() {
    // Coordinates of origin and destination
    float x1, y1, x2, y2;

    // Motion parameters
    float u, a, v_max;

    // Variables for distance and time calculations
    float distance, t1, d1, t2, total_time;

    // -------- INPUT --------

    // Taking origin coordinates
    printf("Enter origin (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    // Taking destination coordinates
    printf("Enter destination (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    // Initial velocity
    printf("Enter initial velocity: ");
    scanf("%f", &u);

    // Acceleration
    printf("Enter acceleration: ");
    scanf("%f", &a);

    // Maximum speed
    printf("Enter max speed: ");
    scanf("%f", &v_max);

    // -------- PART C: ERROR HANDLING --------

    // Acceleration must be positive
    if (a <= 0) {
        printf("Error: Acceleration must be positive.\n");
        return 0;
    }

    // Max speed must be positive
    if (v_max <= 0) {
        printf("Error: Max speed must be positive.\n");
        return 0;
    }

    // Max speed cannot be less than initial velocity
    if (v_max < u) {
        printf("Error: Max speed cannot be less than initial velocity.\n");
        return 0;
    }

    // -------- PART A: DISTANCE --------

    // Calculating distance using distance formula
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // -------- PART B: TIME --------

    // Time taken to reach maximum speed
    t1 = (v_max - u) / a;

    // Distance covered during acceleration
    d1 = (u * t1) + (0.5 * a * t1 * t1);

    // If rover reaches destination before hitting max speed
    if (d1 >= distance) {
        total_time = (-u + sqrt(u*u + 2*a*distance)) / a;
    } else {
        // Remaining distance after reaching max speed
        float d2 = distance - d1;

        // Time taken to cover remaining distance at max speed
        t2 = d2 / v_max;

        // Total time = acceleration time + constant speed time
        total_time = t1 + t2;
    }

    // -------- OUTPUT --------

    // Printing distance and time
    printf("Distance to destination: %.1f m\n", distance);
    printf("Time required: %.1f seconds\n", total_time);

    return 0;
}
