#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	// variables used in the program
	string twitterData;
	int userInput;
	int countTweets = 0;
	ifstream inTwitterFile;
	char replay = 'y';
	while (replay == 'y') {
		// Series of cout statements that print to the console 
		cout << " Welcome to the twiiter tweet HQ" << endl;
		cout << "You have been granted access to view tweets from the very best twitter users" << endl;
		cout << "please select a twiiter query between 1 and 10 you might be pleasently surprised !!!!" << endl;



		cout << " 1; All the twtter tweets that have been gathered for you " << endl;
		cout << " 2;Tweets relating to Paris " << endl;
		cout << " 3;All the tweets that the users posted about holidays " << endl;
		cout << " 4;Tweets releated to Jobs " << endl;
		cout << " 5;Uber fame " << endl;
		cout << " 6; Amount of times that users tweeted about the studio DreamWorks " << endl;
		cout << " 7; Tweets about Money " << endl;
		cout << " 8; Users and their food " << endl;
		cout << " 9; Amount of tweets for cars " << endl;
		cout << " 10;All the Political tweets " << endl;
		cout << " Press N to exit the HQ and return to reality" << endl;
		countTweets = 0;
		// Add rest of menu 
		cin >> userInput;
		// Checking if the user input is the correct data type
		if(cin.fail())
		{
			
			break;
		}
		/* Checking if the user enters the key 1 
		Intwtterfile opens the CSV file
		While checking the CSV file 
		the getLine command is checking the all the lines within the CSV file 
		The tweets are counted and displayed within the command line 
		*/
		if (userInput == 1)
		{
			
			inTwitterFile.open("sampleTweets.csv");
			if (inTwitterFile.good())
			{
				while (!inTwitterFile.eof())
				{
					getline(inTwitterFile, twitterData);
					countTweets++;
					//cout << twitterData << endl;

				}
				cout << " Every single tweet from the top 20 twitter users " << countTweets << endl;
				inTwitterFile.close();
			}

		}
		else if (userInput == 2)
		{
			inTwitterFile.open("sampleTweets.csv");
			if (inTwitterFile.good())
			{
				
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
		else if (userInput == 3)
		{
			inTwitterFile.open("sampleTweets.csv");
			if (inTwitterFile.good())
			{
				
				while (!inTwitterFile.eof())
				{
					getline(inTwitterFile, twitterData);
					if (twitterData.find("Holiday") <= twitterData.length())
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
					if (twitterData.find("Job") <= twitterData.length())
					{

						cout << twitterData << endl;
					}

				}
					inTwitterFile.close();
				
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
					if (twitterData.find("Uber") <= twitterData.length())
					{

						cout << twitterData << endl;
					}
				}
				inTwitterFile.close();

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
					if (twitterData.find("DreamWorks") <= twitterData.length())
					{

						cout << twitterData << endl;
					}
				}
				inTwitterFile.close();

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
					if (twitterData.find("Paris") <= twitterData.length())
					{

						cout << twitterData << endl;
					}
				
				}
				inTwitterFile.close();

			}

		}
		else if (userInput == 8)
		/* Checking if the user enters the 8 key
		Intwtterfile opens the CSV file
		While checking the CSV file
		the getLine command is checking the all the lines within the CSV file
		All lines of the query is checked and if the search term is found 
		the tweets are displayed.
		*/
		{
			inTwitterFile.open("sampleTweets.csv");
			if (inTwitterFile.good())
			{

				while (!inTwitterFile.eof())
				{
					getline(inTwitterFile, twitterData);
					if (twitterData.find("Food") <= twitterData.length())
					{

						cout << twitterData << endl;
					}
				}
				inTwitterFile.close();
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
					if (twitterData.find("Car") <= twitterData.length())
					{

						cout << twitterData << endl;
					}
				}
				inTwitterFile.close();
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
				if (twitterData.find("Money") <= twitterData.length())
				{

					countTweets++;
				}

				
				
			}
				cout << countTweets << endl;
				inTwitterFile.close();
		}

	}
	/* A cout statement is used which asks the user if they would like to continue
		Cin waiting for replay
	*/
		cout << " Would you like to continue" << endl;
			cin >> replay;

	}//<<---- end of while loop
	cout << " Thanks for using this twitter application " << endl;
	

	return 0;
}
