#include <stdio.h>
int main()
{
    char f;
    printf("Enter a character: ");
    scanf("%c",&f);

    if( (f>='a' && f<='z') || (f>='A' && f<='Z'))
        printf("%c is an alphabet.",f);
    else
        printf("%c is not an alphabet.",f);

    return 0;
}
