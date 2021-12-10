#include "Parser.h"
#include <string>
using namespace std;

Parser::Parser()
{

}

Parser::Parser(array<string, 250> textArray)
{
	this->extractedValues = textArray;

}
Parser::~Parser()
{

}

float Parser::CalculateBeforeComma(string beforeComma) {
	int positionValue = beforeComma.length() - 1;
	float result = 0.0;
	for (int i = 0; i < beforeComma.length(); i++) {
		if (beforeComma[i] == '1') {
			result += 1 * powf(2.0, (int)positionValue);
		}

		positionValue--;
	}

	return result;
}

float Parser::CalculateAfterComma(string afterComma) {
	int positionValue = afterComma.length();
	float result = 0.0;
	for (int i = 0; i < afterComma.length(); i++) {
		if (afterComma[i] == '1') {
			result += 1 * powf(2.0, (int)-1 * positionValue);
		}

		positionValue--;
	}

	return result;
}

array<float, 250> Parser::ParseToFloatArray()
{
	array<float, 250> result{};
	for (int i = 0; i < this->extractedValues.size(); i++) {

		if (extractedValues[i] == "") {
			break;
		}

		string value = this->extractedValues[i];

		bool isNegative = value[0] == '-';

		int start = 0;
		int end = value.find(',');

		string beforeComma = "", afterComma = "";

		if (end != -1) {
			beforeComma = value.substr(start, end);
			afterComma = value.substr(end + 1, value.length() - 1);
		}
		else {
			beforeComma = value;
		}

		float beforeCommaParsed = CalculateBeforeComma(beforeComma);
		float afterCommaParsed = 0;
		if (afterComma != "") {
			afterCommaParsed = CalculateAfterComma(afterComma);
		}
		
		result[i] = (beforeCommaParsed + afterCommaParsed);

		if (isNegative) {
			result[i] *= -1.0f;
		}
	};

	return result;
}