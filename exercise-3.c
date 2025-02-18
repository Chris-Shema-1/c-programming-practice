#include <stdio.h>

struct Student {
    char name[50];
    int maths;
    int robotics;
    int coding;
    float average;
};

int main() {
    struct Student students[5];  // Array to store 5 students

    // Loop to input student details
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        
        // Input student name
        printf("Enter name: ");
        scanf("%s", students[i].name);
        
        // Input marks for each subject
        printf("Enter marks for Maths: ");
        scanf("%d", &students[i].maths);
        printf("Enter marks for Robotics: ");
        scanf("%d", &students[i].robotics);
        printf("Enter marks for Coding: ");
        scanf("%d", &students[i].coding);
        
        // Calculate the average
        students[i].average = (students[i].maths + students[i].robotics + students[i].coding) / 3.0;
    }

    // Display the details of all students
    printf("\nStudent Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nName: %s\n", students[i].name);
        printf("Maths: %d\n", students[i].maths);
        printf("Robotics: %d\n", students[i].robotics);
        printf("Coding: %d\n", students[i].coding);
        printf("Average: %.2f\n", students[i].average);
    }

    return 0;
}
