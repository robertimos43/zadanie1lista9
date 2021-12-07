#include "TextExtractor.h"
#include <memory>

TextExtractor::TextExtractor()
{

    //ctor
}

TextExtractor::~TextExtractor()
{

    //dtor
}

TextExtractor::TextExtractor(string text)
{
    this->toParse=text;

}

string* TextExtractor::Exctract()
{
    string extractedValues[100];
    string buffor;
    int currentLocation=0;
    for(int i=0;toParse[i]!=';';i++)
    {
        if(toParse[i]=='1'||toParse[i]=='0'||toParse[i]==','||toParse[i]=='-')
            buffor+=toParse[i];
        else
        {
            if(buffor.length()!=0)
            {
                extractedValues[currentLocation]=buffor;
                currentLocation++;
                buffor="";
            }
        }
    }
    return extractedValues;
}

