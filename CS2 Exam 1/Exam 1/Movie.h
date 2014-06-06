
#include <iostream>
using namespace std;
#ifndef MOVIE_H
#define MOVIE_H
class Movie
{		
	private: //no one can change
		string Title;
		string Genre;
		int ShowTime;
	
	public:
		Movie ();
		Movie (string Title, string Genre, int ShowTime);

		string Movie::GetTitle()
			{return Title;}
		string Movie::GetGenre()
			{return Genre;}
		int Movie::GetShowTime()
			{return ShowTime;}


};
#endif