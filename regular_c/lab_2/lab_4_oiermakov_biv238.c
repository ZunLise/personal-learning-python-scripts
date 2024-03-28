/* 1 1 3
ано k символьных строк. Каждая строка содержит латинские и русские буквы, цифры, а также все возможные разделители

Выделить из каждой строки и напечатать подстроки:
1. заключенные в фигурные скобки;
Пробел считать буквой. Каждую подстроку печатать с новой строки. Пустые подстроки не выделять и не печатать


Среди выделенных подстрок найти подстроку
1. самую длинную
Если таких подстрок несколько, выбирается первая из них.

Преобразовать исходную строку, которой принадлежит найденная
подстрока, следующим образом:
3. удалить пробелы, расположенные в начале строки;


Все части оформить как подпрограммы в одной программе.
Ввод данных, анализ существования результатов и их вывод оформить в
главной программе. Если выполнение какого-либо задания невозможно, то
необходимо вывести соответствующее сообщение.
=====================================
*/

#include <stdio.h>
#define clam 80

int bracket_strings(char arr_br[][clam], int k_br) {
    int it_br, it2_br, it3, last_br, shift_us, t_us;
    int find_biggest[4]; //length coordinate start end
    find_biggest[0] = 0;
    char substring[clam];
    for (it3 = 0; it3 < k_br+1; it3++) {
        last_br = -1;
        for(it_br = 0;arr_br[it3][it_br] != '\0'; it_br++) {
            if (arr_br[it3][it_br] == '}') {
                last_br = it_br;
            }
        }

        if (last_br > 1) {
            for(it_br = 0; it_br <= last_br; it_br++) {
                if (arr_br[it3][it_br] == '{') {
                    for(it2_br = 0; it2_br+it_br < last_br; it2_br++) { //123{657}9
                        if (arr_br[it3][it2_br+it_br+1] == '}' && it2_br != 0) {
                            substring[it2_br] = '\0';
                            puts(substring);
                            if(it2_br > find_biggest[0]) {
                                find_biggest[0] = it2_br+1;
                                find_biggest[1] = it3;
                                find_biggest[2] = it_br+1;
                            }
                        }
                        substring[it2_br] = arr_br[it3][it2_br+it_br+1];
                    }
                }
            }
        }
    }
    if (find_biggest[0] > 0) {
        printf("\nbiggest substring: ");
        for (it3 = find_biggest[2]; it3 < find_biggest[0]+find_biggest[2]-1; it3++) {
            printf("%c", arr_br[find_biggest[1]][it3]);
        }
        printf("\n");
        shift_us = 0;
        if (arr_br[find_biggest[1]][0] == ' ') {
            for(;arr_br[find_biggest[1]][shift_us] == ' '; shift_us++){} 
            for(t_us = 0; arr_br[find_biggest[1]][t_us+shift_us-1] != '\0'; t_us++){
                arr_br[find_biggest[1]][t_us] = arr_br[find_biggest[1]][t_us+shift_us];
            }
        }
        puts(arr_br[find_biggest[1]]);
        return 70000;
    }
    else {
        printf("no substrings\n");
        return 70001;
    }
    return 69999;
}

int main() {
    int ret = 0;
    int k, i;
    printf("how many strings: ");
    scanf("%i", &k);
    char s[clam][clam];
    for(i = 0; i < k+1; i++) {
        gets(s[i]);
    }
    ret = bracket_strings(s, k);
    return ret;
}