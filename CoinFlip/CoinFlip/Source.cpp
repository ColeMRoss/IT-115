//Cole Ross

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	int repeats = 100,
		headCount = 0,
		tailCount = 0,
		random = 0;

	srand(time(NULL));


	//Coin Flip (0=heads, 1=tails)
	for (int i = 0; i < repeats; i++)
	{
		random = rand() % 2;

		cout << random;

		//add heads
		if (random == 0)
		{
			headCount++;

		}

		//add tails
		if (random == 1)
		{
			tailCount++;
		}
	}

	//display 
	cout << endl << "Tails: " << tailCount << endl;
	cout << "Heads: " << headCount << endl;


	//declare winner

	if (headCount > tailCount)
	{
		cout << "Heads Wins!" << endl;
	}
	else
	{
		cout << "Tails Wins!" << endl;
	
	}

	


	system("Pause");
	return 0;
}