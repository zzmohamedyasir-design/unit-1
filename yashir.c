#include <stdio.h>

int main()
{
int choice;
int roll_no;
int m1, m2, m3, m4, m5;
int total;
int average;
char name[50];
char grade;
char result[10];

do
{
    printf("\nSTUDENT MARKS MANAGEMENT SYSTEM\n");
    printf("--------------------------------\n");
    printf("1. Enter Student Details\n");
    printf("2. Calculate Result\n");
    printf("3. Display Result\n");
    printf("4. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:

            printf("Enter Roll Number: ");
            scanf("%d", &roll_no);

            printf("Enter Student Name: ");
            scanf(" %[^\n]", name);

            printf("Enter Subject 1 Mark: ");
            scanf("%d", &m1);

            printf("Enter Subject 2 Mark: ");
            scanf("%d", &m2);

            printf("Enter Subject 3 Mark: ");
            scanf("%d", &m3);

            printf("Enter Subject 4 Mark: ");
            scanf("%d", &m4);

            printf("Enter Subject 5 Mark: ");
            scanf("%d", &m5);

            break;

        case 2:

            total = m1 + m2 + m3 + m4 + m5;
            average = total / 5;

            if(average <= 100 && average > 80)
            {
                grade = 'A';
                sprintf(result, "PASS");
            }
            else if(average <= 80 && average > 60)
            {
                grade = 'B';
                sprintf(result, "PASS");
            }
            else if(average <= 60 && average >= 45)
            {
                grade = 'C';
                sprintf(result, "PASS");
            }
            else
            {
                grade = 'D';
                sprintf(result, "FAIL");
            }

            printf("\nResult Calculated Successfully!\n");

            break;

        case 3:

            printf("\n----- STUDENT RESULT -----\n");
            printf("Roll Number: %d\n", roll_no);
            printf("Student Name: %s\n", name);
            printf("Total Marks: %d\n", total);
            printf("Average: %d\n", average);
            printf("Grade: %c\n", grade);
            printf("Result: %s\n", result);

            break;

        case 4:

            printf("\nExiting Program...\n");

            break;

        default:

            printf("\nInvalid Choice! Please try again.\n");
    }

} while(choice != 4);

return 0;

}