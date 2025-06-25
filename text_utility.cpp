#include "text_utility.h"

int word_count(char arr[])
{
    int count = 0;
    int i = 0;

    while (arr[i] != '\0') {

        while (arr[i] == ' ') {
            i++;
        }


        if (arr[i] != '\0') {
            count++;


            while (arr[i] != ' ' && arr[i] != '\0') {
                i++;
            }
        }
    }

    return count;
}

int char_Count(char arr[])
{
    int count = 0;

    while (arr[count] != '\0')
    {
        count++;
    }
    return count;
}
int vowel_count(char arr[])
{
    int counter = 0; 
    int i = 0;
    while (arr[i] != '\0')
    {
        switch (arr[i])
        {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            counter++;
            break;
        case 'A': case 'E': case 'I': case 'O': case 'U':
            counter++;
            break;
        default:
            break;
        }
        i++;
    }

    return counter;
}
int consonant_count(char arr[])
{
    int counter = 0;
    int i = 0;
    while (arr[i] != '\0')
    {
        if (islower(arr[i]) || isupper(arr[i]))
        {
            switch (arr[i])
            {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                break;
            case 'A': case 'E': case 'I': case 'O': case 'U':
                break;
            default:
                counter++;
                break;
            }
        }
        i++;
    }

    return counter;
}
bool palindrome_Check(char arr[])
{
    int arr_size = arr.charCount();

    for (int i = 0; i < arr_size / 2; i++)
    {
        if (arr[i] != arr[arr_size - 1 - i])
        {
            return false;
        }
        return true;
    }
}
void convert_Toupper(char arr[])
{

}
void convert_Tolower(char arr[])
{

}
int sub_occur_Count(char arr[], char sub[])
{

}
void reverse_string(char arr[])
{

}