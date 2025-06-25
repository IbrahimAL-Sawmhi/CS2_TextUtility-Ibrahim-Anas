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

    while(arr[count] != '\0')
    {
        count++;
    }
    return count;
}
int vowel_count( char arr[])
{
    
}
int consonant_count(char arr[])
{

}
bool palindrome_Check(char arr[])
{

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

const int MAX_LENGTH = 1000;

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