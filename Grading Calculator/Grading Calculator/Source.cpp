#include <iostream>

using namespace std;

int main()
{
	double points = 0, pointsPossible = 0, percent = 0;
	char grade = 'an A';
	string gradeText = "Empty";

	//output
	cout << "How many points did you score?" << endl;
	 //input
	cin >> points;

	//output
	cout << "Max amount of points possible?" << endl;
	//input
	cin >> pointsPossible;


	//calculate percent
	percent = (points / pointsPossible) * 100;
	//percent output
	cout << percent << "%" << endl;

	//Grade A
	if (percent >= 90)
	{
		grade = 'A';
		gradeText = "you did a great job!";
	}

	//Grade B
	else if (percent >= 80 && percent < 90)
	{
		grade = 'B';
		gradeText = "You did well.";
	}

	//Grade C
	else if (percent >= 70 && percent < 80)
	{
		grade = 'C';
		gradeText = "You Passed.";
	}

	//Grade D
	else if (percent >= 60 && percent < 70)
	{
		grade = 'D';
		gradeText = "You didnt do very well.";
	}

	//Grade F
	else if (percent < 60)
	{
		grade = 'F';
		gradeText = "Very Bad!";
	}

	//output for grade
	cout << "Your grade is a(n) " << grade << endl;
	cout << gradeText;




}