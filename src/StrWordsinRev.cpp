/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len){
	if (input == NULL || len < 1)
		return;
	else
	{
		int index = 0, index1 = len - 1;
		while (index <= index1)
		{
			char temp = input[index];
			input[index] = input[index1];
			input[index1] = temp;
			index++;
			index1--;
		}
		int i = 0,j=0;
		for (j = 0; j < len; j++)
		{
			if (input[j] == ' ')
				continue;
			i = j;
			while (input[j] != ' '&& j < len)
				j++;
			index = i;
			index1 = j-1;
			while (index <= index1)
			{
				char temp = input[index];
				input[index] = input[index1];
				input[index1] = temp;
				index++;
				index1--;
			}
			
		}
	}
	
}
