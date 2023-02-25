
#include <iostream>
#include <string>
using namespace std;

int math();

int main()
{
	cout << math();

}


int math()
{

	int score = 0;
	int userInput;
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{

		string count = to_string(i + 1);
		
		int randomNumber1 = rand() % 1000;
		int randomNumber2 = rand() % 1000;

		string str1 = to_string(randomNumber1);
		string str2 = to_string(randomNumber2);

		cout << count + ". " + str1 + " + " + str2 + " = ";

		cin >> userInput;

		if (userInput == randomNumber1 + randomNumber2)
		{
			score++;
		}

	}
	
	cout << "Score: ";

	return score;

}

