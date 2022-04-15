// Way To Long Words


/*
#include <stdio.h>
#include <string.h>

int main()
{
    int n, counter;
    scanf("%d", &n);
    struct words
    {
        char word[100];
    };
    if (n >= 1 && n <= 100)
    {
        struct words w[n],wordscollection[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%s", w[i].word);
        }
        for (int i = 0; i < n; i++)
        {
            strcpy(wordscollection[i].word,strlwr(w[i].word));
        }
        for (int i = 0; i < n; i++)
        {
            if (strlen(w[i].word) > 10)
            {
                printf("%c", wordscollection[i].word[0]);
                printf("%d", strlen(wordscollection[i].word) - 2);
                printf("%c\n", wordscollection[i].word[(strlen(wordscollection[i].word) - 1)]);
            }
            else
                printf("%s\n", wordscollection[i].word);
        }
    }

    return 0;
}

*/


#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        char word[100];
        scanf("%s",word);
        int length=strlen(word);
        if (length>10)
            printf("%c%d%c\n",word[0],length-2,word[length-1]);
        else
            printf("%s\n",word);
    }
    return 0;
}