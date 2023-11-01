#include <stdio.h>
#include <string.h>

int is_palindrome(char *s)
{

    int j = strlen(s) - 1;
    int k = 0;
    while (j > k)
    {
        if (s[j] != s[k])
        {
            return 0;
        }
        k++;
        j--;
    }
    return 1;
}

int main()
{
    char s[1000];

    scanf("%s", s);
    int result = is_palindrome(s);
    if (result == 1)

    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}