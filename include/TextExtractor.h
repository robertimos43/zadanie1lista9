#ifndef TEXTEXTRACTOR_H
#define TEXTEXTRACTOR_H
#include <string>
#include <array>

using namespace std;

class TextExtractor
{
    public:
        array<string, 250> Extract();
        TextExtractor();
        TextExtractor(string text);
        virtual ~TextExtractor();

    protected:

    private:
        string toParse;
};

#endif // TEXTEXTRACTOR_H
