#ifndef PARSER_H
#define PARSER_H
#include <string>
#include <array>
#include <math.h>

using namespace std;

class Parser
{
public:
	array<float, 250> ParseToFloatArray();
	Parser();
	Parser(array<string, 250> textArray);
	virtual ~Parser();

protected:

private:

	array<string, 250> extractedValues;
	float CalculateBeforeComma(string beforeComma);
	float CalculateAfterComma(string afterComma);
};

#endif // PARSER_H