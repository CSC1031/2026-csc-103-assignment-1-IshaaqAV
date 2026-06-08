#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    /*  Index: AS20250657
        Name: Ishaaq Ahmed Vasim */

    int mathsMarks, scienceMarks, englishMarks, totalMarks;
    double averageMarks;
    char grade;
    char status[6];
    char studentName[50];

    printf("Please enter your first name: ");
    scanf("%s", studentName);
   printf("\n\nPlease enter your marks\n");
   printf("Maths: ");
   scanf("%d", &mathsMarks);
   printf("Science: ");
   scanf("%d", &scienceMarks);
   printf("English: ");
   scanf("%d", &englishMarks);

   totalMarks = mathsMarks+scienceMarks+englishMarks;
   averageMarks = totalMarks/3.0;
   if (averageMarks>=80)
   {
       grade='A';
   } else if (averageMarks>=70)
        {
            grade='B';
        }
     else if (averageMarks>=60)
        {
            grade='C';
        }
     else if (averageMarks>=50)
     {
         grade='D';
     }
     else {grade = 'F';
     }

     if ((mathsMarks&&englishMarks&&scienceMarks)>=40)
     {
         strcpy(status, "Pass");
     } else {strcpy(status, "Fail");}

   printf("\nYour marks and grades are as follows;\n\n");
   printf("Total Marks: %d\nAverage Marks: %.2lf\nGrade: %c\nResult: %s", totalMarks, averageMarks, grade, status);


    return 0;
}
