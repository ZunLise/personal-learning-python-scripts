#include <stdio.h>
#define lmax 200

/*
II. Создать текстовый файл средствами редактора (т.е. в «Блокноте»).
Прочитать этот файл построчно и произвести в каждой строке следующие
действия:
7. вставить букву 'A' после двух или более следующих подряд цифр;
Записать каждую полученную строку в новый текстовый файл и вывести
полученные строки из файла на экран. Имена входного и выходного файла
задаются пользователем.
*/
int task(char evth[][200], char path[]) {
    FILE *start;
    return 0;
}

int res_to_new(char evth[][200], char path[]) {
    FILE *end;
    return 0;
}

int main() {
    char PATH[lmax], stuff[lmax][lmax];
    printf("where are we reading from?\n");
    gets(PATH);
    task(stuff, PATH);
    printf("where do we save?\n");
    gets(PATH);
    res_to_new(stuff, PATH);
    return 0;
}