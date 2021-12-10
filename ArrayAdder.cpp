#include "ArrayAdder.h"


ArrayAdder::ArrayAdder() {

}

ArrayAdder::ArrayAdder(array<float, 250> arrayToSum) {
	this->toSum = arrayToSum;
}

ArrayAdder::~ArrayAdder() {

};

float ArrayAdder::AddArray() {

	float result = 0;
	for (int i = 0; i < toSum.size(); i++) {
		result += toSum[i];
	}

	return result;
}