// develope a program to check wheteher its palindrome or not without using palindrome
#include <stdio.h>
void main()
{
    char name[100], ispallindrome = 1, length = 0;

    printf("Enter the name:");
    scanf(" %s", &name);

    while (name[length] != '\0')
    {
        length++;
    }
    if (name[0] == name[length - 1])
    {
        for (int i = 0; i < length / 2; i++)
        {
            if (name[i] != name[length - i - 1])
            {
                ispallindrome = 0;
                break;
            }
        }
        if (ispallindrome)
        {
            printf("It's a palindrome\n");
        }
        else
        {
            printf("It's not a palindrome\n");
        }
    }
    else
    {
        printf("It's not a palindrome\n");
    }
}