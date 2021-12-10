#ifndef ARRAYADDER_H
#define ARRAYADDER_H
#include <string>
#include <array>
#include <math.h>


using namespace std;

class ArrayAdder
{
	public:
		ArrayAdder(array<float, 250> arrayToSum);
		ArrayAdder();
		virtual ~ArrayAdder();
		float AddArray();

	private:
		array<float, 250> toSum;
};

#endif // ARRAY_H