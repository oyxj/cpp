#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    cout<<"======================================="<<endl;
    cout<<"char*, char[]"<<endl;
    
    char text1[]="abcdefg";
    cout<<"size of char[] : "<<text1<<" is "<<sizeof(text1)<<endl;
    cout<<"strlen of char[] : "<<text1<<" is "<<strlen(text1)<<endl;

    const char* text2="abcdefg";
    cout<<"size of const char* : "<<text2<<" is "<<sizeof(text2)<<endl;
    cout<<"strlen of const char* : "<<text2<<" is "<<sizeof(text2)<<endl;

    char* ptr1="hello";// Assign the string literal to a variable
    ptr1[1]='a';// Undefined behavior;
    const char* ptr2="hello";// Assign the string literal to a variable.
    //ptr2[1]='a';// Error! Attemps to write to read-only memory.
    char arr[]="hello";// Compile takes care of creating appropriate sized character array arr.
    arr[1]='a';// The contents can be modified
    cout<<"initial string : hello"<<endl;
    cout<<"modified char* : "<<*ptr1<<endl;
    cout<<"modified const char* : "<<*ptr2<<endl;
    cout<<"modified char[] : "<<arr<<endl;

    cout<<"======================================="<<endl;
    cout<<"string"<<endl;
}