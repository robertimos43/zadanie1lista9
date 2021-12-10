#include <iostream>
#include "include/TextExtractor.h"
#include "ArrayAdder.h"
#include "Parser.h"
#include <array>


using namespace std;



int main()
{
    cout<<"Please enter the string to evaluate: ";
    string toEvaluate;
    cin>>toEvaluate;
    TextExtractor * extractor = new TextExtractor(toEvaluate);

    array<string, 250> extracted = extractor -> Extract();
    delete extractor;

    Parser* parser = new Parser(extracted);

    array<float, 250> parsedValues = parser -> ParseToFloatArray();
    delete parser;

    ArrayAdder* adder = new ArrayAdder(parsedValues);
    float result = adder->AddArray();

    cout << "Result : " << result;
}

