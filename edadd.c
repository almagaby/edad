#include <stdio.h>
#include <time.h>

int calculateAge(int birthYear, int birthMonth, int birthDay) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    int age = tm.tm_year + 1900 - birthYear;

    if (tm.tm_mon + 1 < birthMonth || 
       (tm.tm_mon + 1 == birthMonth && tm.tm_mday < birthDay)) {
        age--;
    }

    return age;
}

int main() {
    int birthYear = 1990, birthMonth = 12, birthDay = 15;
    printf("Edad: %d\n", calculateAge(birthYear, birthMonth, birthDay));
    return 0;
}
