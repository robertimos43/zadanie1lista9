#include <iostream>
#include "TextExtractor.h"



using namespace std;



int main()
{
    cout<<"Please enter the string to evaluate: ";
    string toEvaluate;
    cin>>toEvaluate;
    TextExtractor * extractor = new TextExtractor(toEvaluate);
    auto extracted=extractor->Exctract();
    delete extractor;
    cout<<extracted[0];

}

