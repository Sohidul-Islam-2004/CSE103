#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50
#define MAX_SUBJECTS 5

typedef struct
{
    int rollNumber;
    char name[MAX_NAME_LENGTH];
    int marks[MAX_SUBJECTS];
} Student;

Student students[MAX_STUDENTS];
int studentCount = 0;

void addStudent();
void deleteStudent();
void updateStudent();
void displayAllStudents();
void displayStudent();

int main()
{
    int x;
    while (1)
    {
        printf("\n");
        printf("===============================================\n");
        printf("            Student Management System           \n");
        printf("===============================================\n");
        printf("1. Add Student\n");
        printf("2. Delete Student\n");
        printf("3. Update Student\n");
        printf("4. Display All Students\n");
        printf("5. Display Particular Student\n");
        printf("6. Exit\n");
        printf("===============================================\n");
        printf("Enter your choice: ");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            addStudent();
            break;
        case 2:
            deleteStudent();
            break;
        case 3:
            updateStudent();
            break;
        case 4:
            displayAllStudents();
            break;
        case 5:
            displayStudent();
            break;
        case 6:
            printf("\nExiting the program. Goodbye!\n");
            return 0;
        default:
            printf("\nInvalid choice. Please try again.\n");
        }
    }
    return 0;
}

void addStudent()
{
    if (studentCount >= MAX_STUDENTS)
    {
        printf("\nCannot add more students. Maximum limit reached.\n");
        return;
    }

    Student newStudent;
    printf("\nEnter roll number: ");
    scanf("%d", &newStudent.rollNumber);
    printf("Enter name: ");
    getchar();
    fgets(newStudent.name, MAX_NAME_LENGTH, stdin);

    printf("Enter marks for %d subjects:\n", MAX_SUBJECTS);
    for (int i = 0; i < MAX_SUBJECTS; i++)
    {
        switch (i)
        {
        case 0:
            printf("CSE103 = ");
            break;
        case 1:
            printf("CSE106 = ");
            break;
        case 2:
            printf("ENG099 = ");
            break;
        case 3:
            printf("CHE109 = ");
            break;
        case 4:
            printf("MAT101 = ");
            break;
        }
        scanf("%d", &newStudent.marks[i]);
    }

    students[studentCount++] = newStudent;
    printf("\nStudent added successfully!\n");
}

void deleteStudent()
{
    int rollNumber;
    printf("\nEnter roll number of the student to delete: ");
    scanf("%d", &rollNumber);

    int found = 0;
    for (int i = 0; i < studentCount; i++)
    {
        if (students[i].rollNumber == rollNumber)
        {
            for (int j = i; j < studentCount - 1; j++)
                students[j] = students[j + 1];
            studentCount--;
            found = 1;
            printf("\nStudent deleted successfully!\n");
            break;
        }
    }

    if (!found)
        printf("\nStudent with roll number %d not found.\n", rollNumber);
}

void updateStudent()
{
    int rollNumber;
    printf("\nEnter roll number of the student to update: ");
    scanf("%d", &rollNumber);

    for (int i = 0; i < studentCount; i++)
    {
        if (students[i].rollNumber == rollNumber)
        {
            printf("Enter new name: ");
            getchar();
            fgets(students[i].name, MAX_NAME_LENGTH, stdin);

            printf("Enter new marks for %d subjects:\n", MAX_SUBJECTS);
            for (int j = 0; j < MAX_SUBJECTS; j++)
            {
                switch (j)
                {
                case 0:
                    printf("CSE103 = ");
                    break;
                case 1:
                    printf("CSE106 = ");
                    break;
                case 2:
                    printf("ENG099 = ");
                    break;
                case 3:
                    printf("CHE109 = ");
                    break;
                case 4:
                    printf("MAT101 = ");
                    break;
                }
                scanf("%d", &students[i].marks[j]);
            }
            printf("\nStudent updated successfully!\n");
            return;
        }
    }

    printf("\nStudent with roll number %d not found.\n", rollNumber);
}

void displayAllStudents()
{
    if (studentCount == 0)
    {
        printf("\nNo students to display.\n");
        return;
    }

    printf("\n============= All Students =============\n");
    for (int i = 0; i < studentCount; i++)
    {
        printf("-----------------------------------------\n");
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s", students[i].name);
        printf("Marks:\n");
        printf("  CSE103: %d\n", students[i].marks[0]);
        printf("  CSE106: %d\n", students[i].marks[1]);
        printf("  ENG099: %d\n", students[i].marks[2]);
        printf("  CHE109: %d\n", students[i].marks[3]);
        printf("  MAT101: %d\n", students[i].marks[4]);
        printf("-----------------------------------------\n");
    }
}

void displayStudent()
{
    int rollNumber;
    char ch[MAX_NAME_LENGTH];
    printf("\n1. Search by Roll Number\n");
    printf("2. Search by Name\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("\nEnter roll number: ");
        scanf("%d", &rollNumber);

        for (int i = 0; i < studentCount; i++)
        {
            if (students[i].rollNumber == rollNumber)
            {
                printf("\n============= Student Details =============\n");
                printf("Roll Number: %d\n", students[i].rollNumber);
                printf("Name: %s", students[i].name);
                printf("Marks:\n");
                printf("  CSE103: %d\n", students[i].marks[0]);
                printf("  CSE106: %d\n", students[i].marks[1]);
                printf("  ENG099: %d\n", students[i].marks[2]);
                printf("  CHE109: %d\n", students[i].marks[3]);
                printf("  MAT101: %d\n", students[i].marks[4]);
                printf("===========================================\n");
                return;
            }
        }
        printf("\nStudent with roll number %d not found.\n", rollNumber);
    }
    else if (choice == 2)
    {
        printf("\nEnter name: ");
        getchar();
        fgets(ch, MAX_NAME_LENGTH, stdin);

        for (int i = 0; i < studentCount; i++)
        {
            if (strcmp(students[i].name, ch) == 0)
            {
                printf("\n============= Student Details =============\n");
                printf("Roll Number: %d\n", students[i].rollNumber);
                printf("Name: %s", students[i].name);
                printf("Marks:\n");
                printf("  CSE103: %d\n", students[i].marks[0]);
                printf("  CSE106: %d\n", students[i].marks[1]);
                printf("  ENG099: %d\n", students[i].marks[2]);
                printf("  CHE109: %d\n", students[i].marks[3]);
                printf("  MAT101: %d\n", students[i].marks[4]);
                printf("===========================================\n");
                return;
            }
        }
        printf("\nStudent with name %s not found.\n", ch);
    }
    else
    {
        printf("\nInvalid choice.\n");
    }
}
