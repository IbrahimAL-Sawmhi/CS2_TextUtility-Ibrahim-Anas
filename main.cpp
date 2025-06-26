#include "text_utility.h"


int main()
{
    // Test 1: word_count
    char text1[] = "Hello world from C++";
    cout << "Word count (should be 4): " << word_count(text1) << endl;

    // Test 2: char_Count
    char text2[] = "TestString";
    cout << "Character count (should be 10): " << char_Count(text2) << endl;

    // Test 3: vowel_count
    char text3[] = "TestString";
    cout << "Vowel count (should be 2): " << vowel_count(text3) << endl;

    // Test 4: consonant_count
    cout << "Consonant count (should be 8): " << consonant_count(text3) << endl;

    // Test 5: palindrome_Check
    char text4[] = "RaceCar";
    cout << "Palindrome check (should be 1): " << palindrome_Check(text4) << endl;

    char text5[] = "NotAPalindrome";
    cout << "Palindrome check (should be 0): " << palindrome_Check(text5) << endl;

    // Test 6: convert_Toupper
    char text6[] = "conver to upper";
    convert_Toupper(text6);
    cout << "Uppercase (should be CONVERT TO UPPER): " << text6 << endl;

    // Test 7: convert_Tolower
    char text7[] = "convert to lower";
    convert_Tolower(text7);
    cout << "Lowercase (should be convert to lower): " << text7 << endl;

    // Test 8: sub_occur_Count
    char text8[] = "abc abc abc";
    char sub1[] = "abc";
    cout << "Substring count (should be 3): " << sub_occur_Count(text8, sub1) << endl;

    // Test 9: reverse_string
    char text9[] = "Reverse";
    reverse_string(text9);
    cout << "Reversed string (should be esreveR): " << text9 << endl;


    
    //Bonus Task 
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

    return 0;
}
