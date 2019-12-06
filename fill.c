#include <stdio.h>  
#include<conio.h>
#include<string.h>
void main(void)  
{  
    FILE *fptr;  
    int id;  
    char name[30];  
    float salary;  
    fptr = fopen("emp.txt", "w+");/*  open for writing */  
    if (fptr == NULL)  
    {  
        printf("File does not exists \n");  
        return;  
    }  
    printf("Enter the id\n");  
    scanf("%d", &id);  
    fprintf(fptr, "Id= %d\n", id);  
    printf("Enter the name \n");  
    scanf("%s", name);  
    fprintf(fptr, "Name= %s\n", name);  
    printf("Enter the salary\n");  
    scanf("%f", &salary);  
    fprintf(fptr, "Salary= %.2f\n", salary);
    fscanf(fp, "Name: %s\t\tRoll no: %d\t\tMarks: %f\n", name, &roll_no, &marks)  
    fclose(fptr);  
}  