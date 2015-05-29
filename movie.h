#include <string>
#ifndef MOVIE_H_
#define MOVIE_H_
using namespace std;


class Movie {
private:
	static string title;
	int showTime;
	string genre;

public:
	

	// default
	Movie(){
		title = "";
		showTime = 0;
		genre = "comedy";
	}

	Movie(string t, string g, int s){
		title = t;
		genre = g;
		showTime = s;
	}
	
	static string Movie::GetTitle();
	string Movie::GetGenre(); // Returns the movie genre 
	int Movie::GetShowtime();// When is this movie shown?

	
};

// for Genre, only Action, Comedy, Horror, and Documentary. 
//If none of those, default to Comedy Movie(string Title, string Genre, int ShowTime);







#endif
