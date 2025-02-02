// Allpass filter declaration
//
// Written by Jezar at Dreampoint, June 2000
// http://www.dreampoint.co.uk
// This code is public domain

#ifndef _allpass_
#define _allpass_
#include "denormals.h"

class allpass
{
public:
					allpass();
			void	setbuffer(double *buf, int size);
	inline  double	process(double inp);
			void	mute();
			void	setfeedback(double val);
			double	getfeedback();
// private:
	double	feedback;
	double	*buffer;
	int		bufsize;
	int		bufidx;
};


// Big to inline - but crucial for speed

inline double allpass::process(double input)
{
	double output;
	double bufout;
	
	bufout = buffer[bufidx];
	undenormalise(bufout);
	
	output = -input + bufout;
	buffer[bufidx] = input + (bufout*feedback);

	if(++bufidx>=bufsize) bufidx = 0;

	return output;
}

#endif//_allpass

//ends