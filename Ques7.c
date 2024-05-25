#include <stdio.h>

int main() {
    
    float kmph, mph;
    printf("Input kilometres per hour: ");
    scanf("%f", &kmph);
    mph = kmph * 0.621371;
    printf("%.6f miles per hour\n", mph);
    return 0;
}
