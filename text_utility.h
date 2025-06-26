#include <iostream>
#include <cstring>
using namespace std;


int word_count(char arr[]);
int char_Count(char arr[]);
int vowel_count(char arr[]);
int constant_count(char arr[]);
int sub_occur_Count(char arr[], char sub[]);
bool palindrome_Check(char arr[]);
void convert_Toupper(char arr[]);
void convert_Tolower(char arr[]);
void reverse_string(char arr[]);

// The Bonus Task
const int MAX_LENGTH = 1000;

void repeatKeyword(char keyword[], char repeated[], int length);
void encrypt(char plaintext[],char keyword[], char ciphertext[]);
void decrypt(char ciphertext[], char keyword[], char plaintext[]);
