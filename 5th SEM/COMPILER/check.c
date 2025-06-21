#include <stdio.h>
#include <string.h>

int main() {
    char str[100], *pstr;
    int Char = 0, line = 0, word = 1;  

    printf("\n Enter the String: ");
    fgets(str, sizeof(str), stdin);  // Safe input function
    pstr = str;  // Initialize pointer after input

    while (*pstr != '\0') {
        if (*pstr == '\n')  
            line++;  

        if (*pstr == ' ' && *(pstr + 1) != ' ')  
            word++;  

        Char++;
        pstr++; 
    }

    // Handling edge cases for line count
    if (str[0] == '\n')  
        line = 0;

    // Handling edge cases for word count
    if (str[0] == ' ' || str[0] == '\n')  
        word = 0;

    printf("\n The string is: %s", str);
    printf("\n Number of Characters = %d"); // Excluding '\0'
    printf("\n Number of Lines = %d", line);
    printf("\n Number of Words = %d\n", word);

    return 0;
}
