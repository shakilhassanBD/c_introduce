#include <stdio.h>
#include <string.h>

int main()
{
    // char n = 5;
    // char arr[] = "shakilhassan";
    // for (int i = 0; i < sizeof(arr)-1; i++)
    // {
    //     printf("%c\n", arr[i]);
    // }

    // int sz = sizeof(arr) / sizeof(char);
    // printf("%d\n", sz);
    // printf("%s\n", arr);

    // char a[13];
    // // gets(a);
    // fgets(a, 7, stdin);
    // printf("%s", a);

    char arr[100];
    // gets(arr);
    scanf("%s", &arr);
    // printf("%s", arr);
    // int count = 0;
    // for (int i = 0; arr[i]!= '\0'; i++)
    // {
    //     count++;
    // }
    printf("%d\n", strlen(arr));


    
    
    return 0;
}