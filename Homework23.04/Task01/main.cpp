/*1.	��������� � ������� main ����� ������� ���.
���������� � ������� ������� �����, ��� ���� ��� �����.
���� ���� ����� � � ������� �� ����� �������� �����������.*/

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