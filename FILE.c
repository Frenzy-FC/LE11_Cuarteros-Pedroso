#include <stdio.h>
#include <string.h>

int main () {

    FILE *fp;
    int name[30];
    int section[30];

    fp = fopen("students.txt", "w");
    if (fp == NULL) {return 1;}

    printf("Complete Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Section: ");
    fgets(section, sizeof(section), stdin);

    fprintf(fp, "Complete Name: %s", name);
    fprintf(fp, "Section: %s", section);

    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {return 1;}

    char stu[100];
    char sec[100];

    fgets(stu, sizeof(stu), fp);
    fgets(sec, sizeof(sec), fp);

    printf("\n%s", stu);
    printf("%s", sec);

    fclose(fp);






}
