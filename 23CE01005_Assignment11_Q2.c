/*
    LAB ASSIGNMENT: 10
    Question number: 2

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 05/04/2024
*/
#include <stdio.h>
#include <string.h>

void removeDuplicates(char *in)
{
    int complete = 0;
    while (!complete)
    {
        complete = 1;
        int in_index = 0, out_index = 0;
        while (in[in_index] != '\0')
        {
            if ((in[in_index] != in[in_index + 1]) || (in[in_index + 1] == '\0'))
            {
                in[out_index] = in[in_index];
                out_index++;
                in_index++;
            }
            else
            {
                in_index += 2;
            }
        }
        in[out_index] = '\0'; // Null-terminate the modified string

        // Check for remaining adjacent duplicate characters
        for (int i = 1; in[i] != '\0'; i++)
        {
            if (in[i] == in[i - 1])
            {
                complete = 0;
                break;
            }
        }
    }
}

int main()
{
    char input[100];
    printf("Enter the string: ");
    scanf("%s", input);

    removeDuplicates(input);
    printf("Output after removing duplicates: %s\n", input);

    return 0;
}
