#include <stdio.h>
#include <math.h>

int main() {
    double radius, surfaceArea;

    // Ask for input
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    // Calculate surface area: A = 4πr²
    surfaceArea = 4 * M_PI * radius * radius;

    // Display the result
    printf("The surface area of the sphere is: %.2lf\n", surfaceArea);

    return 0;
}
