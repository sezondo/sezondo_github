#include <stdio.h>
#include <string.h>

// 15장 자기주도 2번

int main()
{

    int i, len;
    int wcnt = 0, wlen = 0;
    char st[50];
    char word[25][100];
    scanf("%[^\r\n]", st);
    
    len = strlen(st);
    
    for (i = 0; i < len; i++) {
        if (st[i] == ' ') {
            word[wcnt][wlen] = '\0';
            wcnt++;
            wlen=0;
        }
        else {
        }
        word[wcnt][wlen] = st[i];
        wlen++;
    }
    
    word[wcnt][wlen] = '\0';
    wcnt++;
    
    for (i = 0; i < wcnt; i++) {    
        
        if (i % 2 == 0)
        {
            puts(word[i]);
        }
        
        
    }
    return 0;
}