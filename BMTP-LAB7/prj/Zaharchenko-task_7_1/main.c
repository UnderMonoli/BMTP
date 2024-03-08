#include <stdio.h>
#include <string.h>         //Бібліотек для використання strln i strstr
#include <ctype.h>          //Бібліотек для роботи з символами tolower
#include <locale.h>

int main() {
    char *locale = setlocale(LC_ALL, "");
    char sentence[1000];
    printf("Введiть речення (закiнчiть символами '/', '//', або '|'): ");
    fgets(sentence, sizeof(sentence), stdin);           //зчитує рядок з консолі

    // Перетворюємо всі символи рядка у нижній регістр для порівняння
    for (int i = 0; sentence[i]; i++) {
        sentence[i] = tolower(sentence[i]);
    }

    // Перевіряємо, чи містить рядок слово "комп'ютер"
    if (strstr(sentence, "ком'ютер") != NULL) {
        printf("Слово комп'ютер знайдено у введеному реченнi.\n");
    } else {
        printf("Слово комп'ютер не знайдено у введеному реченнi.\n");
    }

    return 0;
}
