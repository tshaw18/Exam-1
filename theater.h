#include <string>
#include "movie.h"
using namespace std;


class Theater{
private:
	string name;
	string phone;
	double popcornPrice = 20.50;
	double cokePrice = 10.50;
public:
	int hour;

	Theater(string n, string p){
		name = n;
		phone = p;
	} //The name for this theater


	void AddMovie(Movie& m); //Add a movie at a specific time


	string Theater::GetMovieForHour(int hour);   //Return the movie shown at or after the given hour
		
	// Return "" if none are upcoming

	int Theater::GetShowTimeForGenre(string g); //When will the movie of the given genre be shown?
	// Return -1 if none exist

	double Theater::GetPopcornPrice(); //Make up a cost in dollars for popcorn 

	double Theater::GetCokePrice(); //Make up a cost on Coke
};
