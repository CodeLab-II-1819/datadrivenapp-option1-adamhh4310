#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	string twitterData;
	int userInput;
	int countTweets;
	ifstream inTwitterFile;
	char replay = 'y';
	while (replay == 'y') {
		cout << " Selection a option of your choice of twitter tweets" << endl;
		cout << " Option 1 " << endl;
		cout << " Option 2 " << endl;
		cout << " Option 3 " << endl;
		cout << " Option 4 " << endl;
		cout << " Option 5 " << endl;
		cout << " Option 6 " << endl;
		cout << " Option 7 " << endl;
		cout << " Option 8 " << endl;
		cout << " Option 9 " << endl;
		cout << " Option 10 " << endl;
		cout << " Press N to exit the application" << endl;
		// Add rest of menu 
		cin >> userInput;
		if(cin.fail())
		{
			break;
		}
		
		if (userInput == 1)
		{
			countTweets = 0;
			inTwitterFile.open("sampleTweets.csv");
			if (inTwitterFile.good())
			{
				while (!inTwitterFile.eof())
				{
					getline(inTwitterFile, twitterData);
					countTweets++;
					//cout << twitterData << endl;

				}
				cout << " The number of tweets in this file is " << countTweets << endl;
				inTwitterFile.close();
			}

		}
		else if (userInput == 2)
		{
			inTwitterFile.open("sampleTweets.csv");
			if (inTwitterFile.good())
			{
				countTweets = 0;
				while (!inTwitterFile.eof())
				{
					getline(inTwitterFile, twitterData);
					if (twitterData.find("Money") <= twitterData.length())
					{

						countTweets++;
					}



				}
				cout << countTweets << endl;
				inTwitterFile.close();
			}
		}
		else if (userInput == 3)
		{
			inTwitterFile.open("sampleTweets.csv");
			if (inTwitterFile.good())
			{
				countTweets = 0;
				while (!inTwitterFile.eof())
				{
					getline(inTwitterFile, twitterData);
					if (twitterData.find("Politics") <= twitterData.length())
					{

						countTweets++;
					}



				}
				cout << countTweets << endl;
				inTwitterFile.close();
			}
		}
		else if (userInput == 4)
		{
			inTwitterFile.open("sampleTweets.csv");
			if (inTwitterFile.good())
			{

				while (!inTwitterFile.eof())
				{
					getline(inTwitterFile, twitterData);
					if (twitterData.find("Paris") <= twitterData.length())
					{

						cout << twitterData << endl;
					}
				}
				
			}

		}
		else if (userInput == 5)
		{
			inTwitterFile.open("sampleTweets.csv");
			if (inTwitterFile.good())
			{

				while (!inTwitterFile.eof())
				{
					getline(inTwitterFile, twitterData);
					if (twitterData.find("DreamWorks") <= twitterData.length())
					{

						cout << twitterData << endl;
					}
				}

			}

		}
		else if (userInput == 6)
		{
			inTwitterFile.open("sampleTweets.csv");
			if (inTwitterFile.good())
			{

				while (!inTwitterFile.eof())
				{
					getline(inTwitterFile, twitterData);
					if (twitterData.find("Uber") <= twitterData.length())
					{

						cout << twitterData << endl;
					}
				}

			}

		}
		else if (userInput == 7)
		{
			inTwitterFile.open("sampleTweets.csv");
			if (inTwitterFile.good())
			{

				while (!inTwitterFile.eof())
				{
					getline(inTwitterFile, twitterData);
					if (twitterData.find("Fruit") <= twitterData.length())
					{

						cout << twitterData << endl;
					}
				}

			}

		}
		else if (userInput == 8)
		{
			inTwitterFile.open("sampleTweets.csv");
			if (inTwitterFile.good())
			{

				while (!inTwitterFile.eof())
				{
					getline(inTwitterFile, twitterData);
					if (twitterData.find("Brexit") <= twitterData.length())
					{

						cout << twitterData << endl;
					}
				}

			}

		}
		else if (userInput == 9)
		{
			inTwitterFile.open("sampleTweets.csv");
			if (inTwitterFile.good())
			{

				while (!inTwitterFile.eof())
				{
					getline(inTwitterFile, twitterData);
					if (twitterData.find("Travel") <= twitterData.length())
					{

						cout << twitterData << endl;
					}
				}

			}

		}
		else if (userInput == 10)
		{
		inTwitterFile.open("sampleTweets.csv");
		if (inTwitterFile.good())
		{

			while (!inTwitterFile.eof())
			{
				getline(inTwitterFile, twitterData);
				if (twitterData.find("Currency") <= twitterData.length())
				{

					cout << twitterData << endl;
				}
			}

		}

		}
		cout << " Would you like to continue" << endl;
			cin >> replay;

	}//<<---- end of while loop
	cout << " Thanks for using this twitter application " << endl;
	 system("pause");

	return 0;
}
