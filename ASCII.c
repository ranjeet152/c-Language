// ASCII Code....

#include <stdio.h>
void main()
{
    char ch ;
    printf("Enter is a Character %c",ch);
    scanf("%c",&ch);
    if (ch >= 65 && ch <= 90)
    {
        printf("%c is  an Uppercase letter\n", ch);
    }
    else
    {
        if (ch >= 97 && ch <= 122)
        {
            printf("%c is  an Lowercase letter\n", ch);
        }
        else
        {
            if (ch >= 48 && ch <= 57)
            {
                printf("%c is  a Digit\n", ch);
            }
            else
            {
                if ((ch >= 32 && ch <= 47) || (ch >= 58 && ch <= 64) ||
                    (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126))
                {
                    printf("%c is a special Character\n", ch);
                }
                else
                {
                    printf("%c is an Unknown Character Type\n", ch);
                }
            }
        }
    }
}

