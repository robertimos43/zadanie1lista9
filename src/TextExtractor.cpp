#include "../include/TextExtractor.h"

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

array<string, 250> TextExtractor::Extract()
{
    array<string, 250> extractedValues;
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

    if (buffor.length() != 0) {
        extractedValues[currentLocation] += buffor;
    }

    return extractedValues;
}

