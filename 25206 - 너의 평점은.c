#include <stdio.h>
#include <string.h>

int main() {
    char subject[51], grade[3];
    double credit, totalCredits = 0.0, weightedSum = 0.0;
    
    double gradeMap[8] = {4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0};
    char *grades[8] = {"A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0"};
    
    for (int i = 0; i < 20; i++) {
        scanf("%s %lf %s", subject, &credit, grade);
        
        if (strcmp(grade, "P") == 0) continue;
        
        double gradePoint = 0.0;
        if (strcmp(grade, "F") != 0) {
            for (int j = 0; j < 8; j++) {
                if (strcmp(grade, grades[j]) == 0) {
                    gradePoint = gradeMap[j];
                    break;
                }
            }
        }
        
        weightedSum += credit * gradePoint;
        totalCredits += credit;
    }
    
    double majorGPA = weightedSum / totalCredits;
    printf("%.4f\n", majorGPA);
    
    return 0;
}
