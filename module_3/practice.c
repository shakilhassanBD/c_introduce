#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    gets(s);
    int len = strlen(s);
    char temp[1000];
    int k= 0;
    // for (int i = len - 1; i >= 0; i--)
    // {
    //     temp[k] = s[i];
    //     k++;
    // }
    int i=len -1;
    int j = 0;
    while (i>=0)
    {
        temp[j]== s[i];
        i--;
        j++;
    }
    
    printf("%s", temp);

    return 0;
}