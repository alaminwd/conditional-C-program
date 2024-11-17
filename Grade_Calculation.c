#include <stdio.h>

// Grade Calculation 

int main() {
    int marks;

    printf("Enter the marks ");
    scanf("%d", &marks);

    if (marks >= 80) {
        printf("Grade: A+ \n");
    } else if (marks >= 70) {
        printf("Grade: A\n");
    } else if (marks >= 60) {
        printf("Grade: A-\n");
    } else if (marks >= 50) {
        printf("Grade: B\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
