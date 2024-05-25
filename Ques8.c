#include <stdio.h>

int main() {
    int minutes , hour ;

    printf("Enter the total minutes ");
    scanf("%d",&minutes);

    hour = minutes /60;
    minutes = minutes %60;

    printf("The time is %d:%d",hour,minutes);

}
