#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char words[101];
    scanf("%s", words);

    int len = strlen(words);
    for(int i=len-1; i>=0; i--){
            if(words[i] >= 'a' && words[i] <= 'z'){
                words[i] = toupper(words[i]);
            }
            else {
                words[i] = tolower(words[i]);
            }

        printf("%c", words[i]);
    }

    return 0;
}  