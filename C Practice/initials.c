#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc < 2)
    {
        printf("Usage: ./initials First Last\n");
        return 1;
    }

{
    //Argc below instead of 3 or 4 since argc stands for count or number of arguments
    for (int i = 1; i < argc; i++)
    {
        printf("%c", argv[i][0]);
    }
    printf("\n");
}
}
