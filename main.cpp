#include"text_utility.h"

int main()
{

    char arr[] = " ibrahim Ibrahim";
    char arr2[] = "naan";
    cout << char_Count(arr) << endl; // 1:
    cout << word_count(arr) << endl; //2:
    cout << palindrome_Check(arr2) << endl; 




    //The bouns task 
    char plaintext[MAX_LENGTH];
    char keyword[MAX_LENGTH];
    char cipher[MAX_LENGTH];
    char decrypted[MAX_LENGTH];

   cout << "Enter plaintext (lowercase only): ";
   cin.getline(plaintext, MAX_LENGTH);

   cout << "Enter keyword (lowercase only): ";
   cin.getline(keyword, MAX_LENGTH);

   encrypt(plaintext, keyword, cipher);
   cout << "Encrypted text: " << cipher << endl;

   decrypt(cipher, keyword, decrypted);
   cout << "Decrypted text: " << decrypted << endl;
}
