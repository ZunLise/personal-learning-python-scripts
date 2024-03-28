#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

/* 
Ввод данных, обработка списка отдельно для заданий II и III, а также вывод списка на экран оформляются как отдельные функции. Анализ существования результата производится в главной функции. 
При выделении и освобождении памяти использовать malloc и free. 
При вводе данных и выводе результата использовать fscanf, fgets и fprintf, fputs.
1 - очередь для хранения целых чисел
числа читаются из файла с вводимым именем
2 - (5) удалить все <= X
3 - (3) выбрать все a < NUM < b и сделать стек
*/ 

struct node {
    struct node *next;
    int info;
};

struct node *int_file_queue(char book[]) {
    struct node *add;
    struct node *last;
    struct node *first=NULL;
    int number = 0;
    int n, N; 
    int t = 1;


    FILE *QF;
    QF = fopen("input.txt", "r+");
    if (QF) {
        last = (struct node*) malloc(sizeof(struct node));
        last->info=number;

        
        while (t) {
            n = fgetc(QF) - 48;
            if (-1 < n && n < 10) {
                if (-1 < c && c < 10) {curnum = curnum * 10 + C * sign;}
                else if (c == -3) {
                    sign = -1;
                    curnum = C * -1;
                }
                else {
                    sign = 1;
                    curnum = C;
                }
            }
        }

        cout << number << "k" << endl;
        first = last;
        for (int i = 0; i < 10; i++) {
            
            fscanf(QF, "%d", &number);
            cout << i << endl << number << endl;

            add = (struct node*) malloc(sizeof(struct node));
            add->info=number; 
            last->next=add;
            last=add;
        }
        last->next=NULL;
        return first; 
    }
}


int main() {
    string s1; char s2[300];


    cout << "enter filename: ";
    cin >> s1;
    cout << "working with '" << s1 << "'" << endl;

    strcpy(s2, s1.c_str());
    struct node *k = int_file_queue(s2);

    cout << k->info << endl;
    k = k->next;
    cout << k->info << endl;
    k = k->next;
    cout << k->info << endl;
    k = k->next;
    

    return 0;
}