# CS2_TextUtility-Ibrahim-Anas
# This project is a simple text utility library built in C++ as part of our CS2 lab assignment at the American University in Cairo.
# It provides a set of functions for **basic text processing using only C-style strings** (`char[]` and `char*`). The code is modularized across multiple files and supports building via **g++** or **CMake**.


## 📁 Project Structure
* text_utility.cpp // The implementaion of the functions
* text_utility.h // Including all header files we need here
* main.cpp // To test the project
* CMakeLists.txt // CMake build configuration


##  Features

The library includes the following string utility functions:

-  Word count
-  Character count (excluding `'\0'`)
-  Vowel and consonant count
-  In-place string reversal
-  Palindrome check
-  Case conversion to uppercase (in-place)
-  Case conversion to lowercase (in-place)
-  Substring occurrence count

## Build

To build the program, follow the steps:

- Clone the repository on your local device using: git clone (the HTTPS link of this repo)
- For CMake:
- In the same folder you cloned the repo on, create a folder named build
- Enter the file, then run this command: cmake ..
- Build the project with this command: make
- Run the program using this command: .\TextUtility
- For G++:
- Compile using: g++ main.cpp text_utility.cpp -o TextUtility
- Then run the program: .\TextUtility (.\TextUtility.exe if on Windows)



# Authors
Ibrahim
Anas

Summer 2025 — Department of Computer Science
The American University in Cairo
