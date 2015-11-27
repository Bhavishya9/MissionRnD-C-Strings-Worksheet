 /*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char removeSpaces(char *str) {
	if (str == "" || str == '\0')
	{
		return '\0';
	}
	else
	{
		int i = 0;
		for (int index = 0; str[index] != '\0'; index++)
		{
			if (str[index] == ' ')
			{
				continue;
			}
			else
			{
				str[i++] = str[index];
			}
		}
		str[i] = '\0';
	}
}