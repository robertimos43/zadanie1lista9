#include <iostream>
#include "include/TextExtractor.h"
#include <array>


using namespace std;



int main()
{
    cout<<"Please enter the string to evaluate: ";
    string toEvaluate;
    cin>>toEvaluate;
    TextExtractor * extractor = new TextExtractor(toEvaluate);

    array<string, 20> extracted = extractor -> Exctract();
    delete extractor;

    cout<<extracted[0];
}

