#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main()

{
	//input variables
	float NumberRight;
	float TotalPoints;
	float GradePercent;

	ifstream inData;

	// open file
	inData.open("Grade.in")

		// read values
		inData >> NumberRight >> TotalPoints;


	//calculate values

	GradePercent = NumberRight / TotalPoints

		cout << "You got a "

		if (GradePercent > 90)
		{
			cout "Excellent" endl;
		}

	if (GradePercent > 80)
	{
		cout "Well Done" endl;
	}

	if (GradePercent > 70)
	{
		cout "Good" endl;
	}
	else if (GradePercent >= 60)
	{
		cout "Need Improvement" endl;
	}
	else (GradePercent < 50)
	{
		cout "Fail" endl;
	}

	return 0;
}