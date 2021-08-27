#ifndef INCLUDEDSTRING_H
    #include <string.h>
    #define INCLUDEDSTRING_H
#endif

// String = Array of characters
typedef char* string;

//String = Structure of strlen & string
typedef struct st_String { size_t contentLength ; char *content; } String;

String setString(string str)
{
    String returnString;
    returnString.content = str;
    returnString.contentLength = strlen(str);
    return returnString;
}

string getString(String *str)
{
    return (str->content);
}

String addCharacter(char ch)
{
    
}

String addString(string str)
{

}