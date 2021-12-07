#ifndef TEXTEXTRACTOR_H
#define TEXTEXTRACTOR_H
#include <string>
using namespace std;

class TextExtractor
{
    public:
        string* Exctract();
        TextExtractor();
        TextExtractor(string text);
        virtual ~TextExtractor();

    protected:

    private:
        string toParse;
};

#endif // TEXTEXTRACTOR_H
