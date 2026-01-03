#include <stdio.h>

/**
 * 
 * 
 */
char* _strtok (char *str)
{
size_t len;
char *str1, *str2, separator;
int count = 0, flag = 0, i;

if(str == NULL)
return(NULL);

while(*str != '\0')
	{
		if(*str == ' ' || *str == '\n' || *str == ',' || *str == '/')
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			count ++;
			flag = 1;
		}
		str ++;
	}
}