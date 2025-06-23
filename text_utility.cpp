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