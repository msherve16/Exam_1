
#include <iostream>
#include "Movie.h"
using namespace std;

#ifndef THEATER_H
#define THEATER_H

class Theater
{
private:
	static int PopcornPrice;
	static int CokePrice;
	static const int corn = 2; 
	static const int soda = 1;
	Theater garland();

public:
	static void SetPopcornPrice (int corn)
	{	corn = PopcornPrice;}

	static void SetCokePrice (int soda)
	{
		soda = CokePrice;
	}

	Theater(string Name, string Phone); //in Source.cpp
	

	void AddMovie (Movie & Movie); // pass by reference

	string GetMovieForHour (int hour)
	{
		int n;
		cout << "Please enter hour ( 0, 2, 5,7,10,12,14,16,19,21,23): " << endl;
		cin >> n;
		if (n != 0||2| 5||7||10||12||14||16||19||21||23) //no time slot
		{
			cout << " " << endl;
		}
		else if ( n == 0 ||14)//gives title name
		{
			cout << "Bill Durham" << endl;
		}
		else if ( n == 2 ||16)//gives title
		{
			cout << "Ocean's Eleven" << endl;
		}
		else if ( n == 5||19)//gives title
		{
			cout << "Monte Python's Meaning of Life" << endl;
		}
		else if ( n == 7 ||21)//gives title
		{
			cout << "Jaws" << endl;
		}
		else if ( n == 10)//gives title
		{
			cout << "Fletch" << endl;
		}
		else if ( n == 12 ||23)//gives title
		{
			cout << "Usual Suspects" << endl;
		}

	}

	
	int GetShowTimeForGenre (string genre)
	{
		int g;
		cout << "Please Enter Number for Genre 1)Comedy 2)Horror 3) Documentary 4) Action: " << endl;
		cin >> g;
		if (g = 1)// time for comedy
		{cout << "Comedy playing at 0, 5, 10, 14, and 19." << endl;
		}
		else if ( g = 2 )//gives time for horror
		{cout << "Horror playing at 7 and 21." << endl;
		}
		else if ( g = 3 )//gives time for documentary
		{cout << "No Documentaries Playing." << endl;
		}
		else if ( g = 4  )//gives time for Action
		{cout << "Action playing at 2, 12, 16, and 23." << endl;
		}
		else //default to comedy
		{cout << "Comedy playing at 0, 5, 10, 14, and 19." << endl;
		}
	}

	int GetPopcornPrice()
		{ cout<< "Popcorn costs " << PopcornPrice << " dollars." << endl;
		return 0;}
	int GetCokePrice()
		{ cout << "Coke costs " << CokePrice << " dollar." << endl;
		return 0;}

	

};
#endif