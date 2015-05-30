#include "theater.h"

void Theater::AddMovie(Movie& m){  //Add a movie at a specific time
	Movie title = m;
}

  string Theater::GetMovieForHour(int hour){   //Return the movie shown at or after the given hour
	if (hour > 24){
		return "";
	}
	else if (hour < 0)
		return "";
	else {
		
		Movie::GetTitle();
		

		return Movie::GetTitle();
	}
	
}


int Theater::GetShowTimeForGenre(string Genre){
	
	

	//When will the movie of the given genre be shown?
	// Return -1 if none exist
	return 0;
}
double Theater::GetPopcornPrice(){
	
	return popcornPrice;
}//Make up a cost in dollars for popcorn 

double Theater::GetCokePrice(){

	return cokePrice;
}//Make up a cost on Coke
