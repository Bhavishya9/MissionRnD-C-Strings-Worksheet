/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>
#include <malloc.h>

#define SIZE 31

char** commonWords(char *str1, char *str2) {
	if (str1 == NULL || str2 == NULL)
		return NULL;
	else
	{
		int i = 0, wordcount1 = 0, wordcount2 = 0, j = 0, k = 0, temp = 0, count = 0;
		char word1[31][31] = { NULL }, word2[31][31] = { NULL };
		while (str1[i] != '\0')
		{
			if (str1[i] != ' ')
			{
				while (str1[i] != ' ' && str1[i] != '\0')
				{
					word1[wordcount1][j++] = str1[i++];
				}
				word1[wordcount1][j] = '\0';
				j = 0;
				wordcount1++;
			}
			else
				i++;
		}
		i = j = 0;
		while (str2[i] != '\0')
		{
			if (str2[i] != 32)
			{
				while (str2[i] != 32 && str2[i] != '\0')
				{
					word2[wordcount2][j++] = str2[i++];
				}
				word2[wordcount2][j] = '\0';
				j = 0;
				wordcount2++;
			}
			else
				i++;
		}
		if (word1 == NULL || word2 == NULL)
			return NULL;
		else
		{
			for (i = 0; i < wordcount1; i++)
			{
				for (k = 0; k < wordcount2; k++)
				{
					j = 0;
					while (word1[i][j] == word2[k][j])
					{
						if (word1[i][j] == '\0' || word2[k][j] == '\0')
							break;
						j++;
					}
					if (word1[i][j] == '\0' && word2[k][j] == '\0')
					{
						count++;
					}
				}
			}
			if (count == 0)
				return NULL;
			else
			{
				char **word3 = (char **)malloc(SIZE* sizeof(char));
				for (i = 0; i < wordcount1; i++)
				{
					for (k = 0; k < wordcount2; k++)
					{
						j = 0;
						while (word1[i][j] == word2[k][j])
						{
							if (word1[i][j] == '\0' || word2[k][j] == '\0')
								break;
							j++;
						}
						if (word1[i][j] == '\0' && word2[k][j] == '\0')
						{
							word3[temp++] = word1[i];
						}
					}
				}
				return word3;
			}
		}
	}
}