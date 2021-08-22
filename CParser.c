#include "cparser.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void StrParse(char* STRING, char* SEPERATOR)
{
    int LENGTH = strlen(STRING);
    int INDEX;
    for(INDEX=0;INDEX<LENGTH;INDEX++)
    {
       printf("%c",INDEX);
    }
}