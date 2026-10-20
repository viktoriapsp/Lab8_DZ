# Домашнее задание к работе 8

## Условие задачи

<img width="710" height="179" alt="image" src="https://github.com/user-attachments/assets/a127a508-d61f-42af-9200-b7134fbbd3ec" />

## Алгоритм и блок-схема

### Алгоритм

1. Начало.
2. Ввод значения переменной `n`.
3. Инициализация переменных: `sum = 1.0` (начальное значение суммы), `fact = 1.0` (текущий факториал).
4. Запуск цикла `for (i = 1; i <= n; i++)`:
   * В теле цикла: `fact = fact * i` (вычисление факториала).
   * В теле цикла: `sum = sum + (1.0 / fact)` (добавление очередного члена ряда).
5. После завершения цикла: вывод переменной `sum`.
6. Конец.

### Блок-схема
<img width="392" height="592" alt="Диаграмма без названия drawio (4)" src="https://github.com/user-attachments/assets/0f9128b1-85b6-4764-8c5e-4d501c954f75" />

[Блок-схема](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=%D0%94%D0%B8%D0%B0%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%B0%20%D0%B1%D0%B5%D0%B7%20%D0%BD%D0%B0%D0%B7%D0%B2%D0%B0%D0%BD%D0%B8%D1%8F.drawio&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22KSebdS8vXQy-1EYPBJ8Y%22%3E7Zldb5swFIZ%2FDdK2i4qvfF2WNO1uJlXKxdqryQUHrBobGdMk%2B%2FWzjR0MIVuW0iyRlgtqH59j7PfhwIE6wTzfPDBQZN9oArHju8nGCe4c3%2FfCWSD%2BSMu2tkwnfm1IGUq0U2NYop9QG11trVACy5YjpxRzVLSNMSUExrxlA4zRddttRXH7rAVI4Z5hGQO8b%2F2OEp7pXfiTxv4VojQzZ%2FbGs3okB8ZZ76TMQELXlilYOMGcUcrrVr6ZQyzFM7rUcfcHRncLY5DwYwJKDhjfD9LzlHxrtizChLqiE60zxOGyALEcWQvAwpbxHIueJ5orhPGcYspUXLBSP2EvOaOv0Bpx1U9GUML77HWEEVhIE9WregO40qty7lxndiePkeuI008npi2OkToudBBkHG6s3Wk9HiDNIWdb4ZJZyEaaz7rB6xlmepbA9PVFHOou0BdXupu50V80NIJ%2BHIgU1VE4xHVTyKbwAhhDTFMGcqFQARkSZ4WsO%2FbYDPyZ4AaapPs3RNUx8jU%2FeQyFFxmMZNgh6bVJesOgREeRZLQiCZRB7oUlV1nlwqDarnfjKhd3BcT91LYOxWTaZuLP2kwGSa8Exj13yB4mGc1fqvLCeCCpuz8GuVwE5tJFUSBOcH8Shunfp0YwBIaC0fjHC022150frVTQnS9ym8p57CjxxExWGum2LzPpk8oeV6pWh39ux6FdFNrFeM063o%2B6k3Ej9wNQ04r%2Ff6LVTzRRnUS9zzV1UZznyRZOB2AKSXLlFeOtRaCuHkeKz%2FhcteJoEA5JCrXsstni0IeGViw2ydaU%2FTYxMctSdynjGU0pAXjRWKP2zdhiCDeIP0nzzUj3ns0IEduyhmT3WU9wmPAhkmLdKeSdYnkfD4MYcPTW1uS9WvunaW3V9NesNTqn1MGpUqOrV9rUqGdSOjxN6aaSHlZpz9LZkvZJRzQ6q7EhnhAYvEAcgfg1VYszQYQS2MunU7x2Hy2h%2FgBxPoKj0wh29vGRCeNeesKo0FvGwNZyKCgivLRmfpQGq17uvKGaWuv%2BgH8w%2Fa2%2FaNQraMDvtnL0tTC%2BrGwe6r75cdlsv5%2F0f1esK0P%2FjAk9OQ2ivZXLxHhMNuuXi%2BGlFt3ms3qdXs0%2FJ4LFLw%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

## Реализация программы

Программа написана на языке C

```c
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int n;
    int i;
    double sum = 1.0;
    double fact = 1.0; 
    printf("Введите n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        fact = fact * i;
        sum = sum + (1.0 / fact);
    } 
    printf("Сумма обратных факториалов до %d: %.6lf\n", n, sum); 
    return 0;
}
```
## Результат работы программы
```
Введите n: 3
Сумма обратных факториалов до 3: 2.666667
```
## Информация о разработчике
```
Имя: Страхова Виктория Викторовна
Группа: бИЦТ-261
Вариант: 27
