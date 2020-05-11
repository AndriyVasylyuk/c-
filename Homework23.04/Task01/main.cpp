/*1.	ѕередайте у функц≥ю main певну к≥льк≥сть сл≥в.
 ористувач в програм≥ вводить слово, €ке хоче там найти.
якщо таке слово Ї Ц вивед≥ть на екран в≥дпов≥дне пов≥домленн€.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char text[30] = " Hello my name is Andriy";

    char temp[10];
    printf("Input your word: ");
    scanf_s("%s", temp, 10);
    if (strstr(text, temp) != 0)
        printf("Text found.\n");
    else
        printf("Text not found.\n");

    return 0;
}