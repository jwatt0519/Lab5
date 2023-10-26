#include <stdio.h>
#include <string.h>
int main()
{
    char input[256];
    int letterCount[26] = {0};
    printf("Enter text strings (press Enter on an empty line to exit):\n");
    while (1)
    {
        fgets(input, sizeof(input), stdin);
        if (strlen(input) == 1 && input[0] == '\n')
        {
            break;
        }
        for (int i = 0; input[i] != '\0'; i++)
        {
            if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z'))
            {
                char c = (input[i] >= 'a' && input[i] <= 'z') ? input[i] - 32 : input[i];
                letterCount[c - 'A']++;
            }
        }
    }
    printf("Distribution of letters in the input:\n");
    for (int i = 0; i < 26; i++)
    {
        printf("%c: %d ", 'A' + i, letterCount[i]);
    }
    printf("\n");
    return 0;
}