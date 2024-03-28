
#include <stdio.h>


int main() {
    FILE *QF;
    int s;
    QF = fopen("i.txt", "r");
    fscanf(QF, "%d", &s);
    printf("%d\n", s);
}