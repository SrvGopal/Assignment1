#include <stdio.h>

int main() {
    float radius , volume;

    printf("Enter the radius of sphere here");
    scanf("%f",&radius);

    volume = (4*3.1415926*(radius*radius*radius))/3;

    printf("The volume of the sphere is %f ",volume);

}

