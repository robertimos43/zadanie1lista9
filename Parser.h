#ifndef PARSER_H
#define PARSER_H
#include <string>
#include <array>

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
};

class Parser
{
};

#endif // PARSER_H