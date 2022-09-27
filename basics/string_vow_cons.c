#include <stdio.h>
main()
{
char line[150];
int vowels, consonant, space,i;
vowels = consonant = space = 0;
printf("Enter line of string:(end with $)");
gets(line);
for (i = 0; line[i] != '$'; ++i)
{
if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
line[i] == 'U')
{
++vowels;
}
else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
{
    ++consonant;
}
else if (line[i] == ' ')
{
++space;
}
}
printf("Vowels: %d", vowels);
printf("\nConsonants: %d", consonant);
printf("\nWhite spaces: %d", space);
} 
