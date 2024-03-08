#include <stdio.h>
#include <locale.h>

int main() {
    char *locale = setlocale (LC_ALL, "");
    int numbers[10]; // масив для зберігання введених чисел
    int count_1 = 0, count_3 = 0, count_157 = 0, count_256 = 0, count_1000 = 0;

    // Ввід 10 натуральних чисел
    printf("Введiть 10 натуральних чисел:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    // Підрахунок кількості чисел, рівних 1, 3, 157, 256 або 1000
    for (int i = 0; i < 10; i++) {
        if (numbers[i] == 1) {
            count_1++;
        } else if (numbers[i] == 3) {
            count_3++;
        } else if (numbers[i] == 157) {
            count_157++;
        } else if (numbers[i] == 256) {
            count_256++;
        } else if (numbers[i] == 1000) {
            count_1000++;
        }
    }

    // Вивід результатів
    printf("Кiлькiсть чисел рiвних 1: %d\n", count_1);
    printf("Кiлькiсть чисел рiвних 3: %d\n", count_3);
    printf("Кiлькiсть чисел рiвних 157: %d\n", count_157);
    printf("Кiлькiсть чисел рiвних 256: %d\n", count_256);
    printf("Кiлькiсть чисел рiвних 1000: %d\n", count_1000);

    return 0;
}
