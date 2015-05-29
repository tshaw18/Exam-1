#include "movie.h"



 string Movie::GetTitle() {
	
	return title;
}

string Movie::GetGenre(){

	return genre;
}

int Movie::GetShowtime(){

	return showTime;
}

const int MOVIECOUNT = 11;
Movie movieListing[MOVIECOUNT];

