
#include <iostream>
#include <cstring>
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
        if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z'))
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
    int len = char_Count(arr);
    for (int i = 0; i < len / 2; i++)
    {
        char l = arr[i];
        char r = arr[len - 1 - i];

        if (l >= 'A' && l <= 'Z')
        {
            l += 32;
        }
        if (r >= 'A' && r <= 'Z')
        {
            r += 32;
        }

        if (l != r)
        {
            return false;
        }
    }
    return true;
}

void convert_Toupper(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        if (int(arr[i]) >= 97 && int(arr[i]) <= 122)
        {
            arr[i] -= 32;
        }
        i++;
    }
}
void convert_Tolower(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        if (int(arr[i]) >= 65 && int(arr[i]) <= 90)
        {
            arr[i] += 32;
        }
        i++;
    }
}
int sub_occur_Count(char arr[], char sub[])
{
    int counter = 0;
    int arrLength = strlen(arr);
    int subLength = strlen(sub);


    for (int i = 0; i <= arrLength - subLength;)
    {
        bool issimilar = true;

        for (int j = 0; j < subLength; j++)
        {
            if (arr[i + j] != sub[j])
            {
                issimilar = false;
                break;
            }
        }

        if (issimilar == true)
        {
            counter++;
            i += subLength;
        }

        else
        {
            i++;
        }
    }

    return counter;
}
void reverse_string(char arr[])
{
    int start = 0;
    int end = strlen(arr) - 1;
    int temp = 0;

   while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }


}

void repeatKeyword(char keyword[], char repeat[], int length)
{
    int keyLen = strlen(keyword);
    for(int i =0; i < length; i++)
    {
        repeat[i] = keyword[i % keyLen];
    }
    repeat[length] = '\0';
}

void encrypt(char plaintext[], char keyword[], char cipher[])
{
    int len = strlen(plaintext);
    char repeat[MAX_LENGTH];
    repeatKeyword(keyword, repeat, len);

    for (int i = 0; i < len; i++) {
        if (plaintext[i] >= 'a' && plaintext[i] <= 'z') {
            int p = plaintext[i] - 'a';
            int k = repeat[i] - 'a';
            cipher[i] = (p + k) % 26 + 'a';
        } else {
            cipher[i] = plaintext[i];
        }
    }
    cipher[len] = '\0';
}

void decrypt(char cipher[], char keyword[], char plaintext[]) {
    int len = strlen(cipher);
    char repeatedKey[MAX_LENGTH];
    repeatKeyword(keyword, repeatedKey, len);

    for (int i = 0; i < len; i++) {
        if (cipher[i] >= 'a' && cipher[i] <= 'z') {
            int c = cipher[i] - 'a';
            int k = repeatedKey[i] - 'a';
            plaintext[i] = (c - k + 26) % 26 + 'a';
        } else {
            plaintext[i] = cipher[i];
        }
    }
    plaintext[len] = '\0';

}
