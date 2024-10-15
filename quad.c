#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, root1, root2, delta;

    printf("Enter a quadratic equation (coefficients a, b, and c): ");
    scanf("%f %f %f", &a, &b, &c);

    delta = (b * b) - (4 * a * c);

    if (delta > 0) {
        root1 = (-b + sqrt(delta)) / (2 * a);
        root2 = (-b - sqrt(delta)) / (2 * a);
        printf("The roots are real and distinct.\n");
        printf("Roots are: %.1f and %.1f\n", root1, root2);
    } else if (delta == 0) {
        root1 = root2 = -b / (2 * a);
        printf("The roots are real and equal.\n");
        printf("Roots are: %.1f and %.1f\n", root1, root2);
    } else {
        printf("The roots are imaginary.\n");
    }
}