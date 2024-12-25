// login mechanism
#include <stdio.h>
#include <string.h>
int main()
{
    // char checkletter = 0, checkspecial = 0, checknumber = 0, checkdomain = 0, email[20], password[6];

    // printf("Enter your Email:\n");
    // gets(email);

    // const char *required_domain = "gmail.com";
    // const char *require_domain = "yahoo.com";

    // for (int i = 0; i < strlen(email); i++)
    // {
    //     if (email[i] == 64)
    //     {
    //         checkspecial = 1;
    //         break;
    //     }
    // }
    // if (strstr(email, required_domain))
    // {
    //     checkdomain = 1;
    // }
    // if (strstr(email, require_domain))
    // {
    //     checkdomain = 1;
    // }

    // if (checkspecial != 1)
    // {
    //     printf("\n email must have @ symbol");
    // }
    // else if (checkdomain != 1)
    // {
    //     printf("\nEmail must contain the domain '%s' or '%s'.\n", required_domain, require_domain);
    // }
    // else
    // {
    //     printf("\nEmail is valid\n");
    // }

    // if (checkspecial == 1 && checkdomain == 1)
    // {
    //     printf("\nEnter your Password:\n");
    //     gets(password);
    //     if (strlen(password) < 6)
    //     {
    //         printf("\nPassword must be at least 6 characters long.\n");
    //     }
    //     else
    //     {
    //         printf("\nPassword is valid.\n");
    //     }
    // }
    // return 0;
    char existed_email[] = "admin@gmail.com", new_email[100];
    char existed_password[] = "123456", new_password[100];

    printf("Enter your Email=");
    scanf("%s", new_email);
    printf("Enter your Password=");
    scanf("%s", new_password);

    if (strcmp(existed_email, new_email) == 0)
    {
        printf("\nCorrect Email");
    }
    else
    {
        printf("\nIncorrect Email");
    }
    if (strcmp(existed_password, new_password) == 0)
    {
        printf("\nCorrect Password");
    }
    else
    {
        printf("\nIncorrect Password");
    }

    return 0;
}

