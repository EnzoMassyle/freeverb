// Comb filter class declaration
//
// Written by Jezar at Dreampoint, June 2000
// http://www.dreampoint.co.uk
// This code is public domain

#ifndef _comb_
#define _comb_

#include "denormals.h"

class comb
{
public:
					comb();
			void	setbuffer(double *buf, int size);
	inline  double	process(double inp);
			void	mute();
			void	setdamp(double val);
			double	getdamp();
			void	setfeedback(double val);
			double	getfeedback();
private:
	double	feedback;
	double	filterstore;
	double	damp1;
	double	damp2;
	double	*buffer;
	int		bufsize;
	int		bufidx;
};


// Big to inline - but crucial for speed

inline double comb::process(double input)
{
	double output;

	output = buffer[bufidx];
	undenormalise(output);

	filterstore = (output*damp2) + (filterstore*damp1);
	undenormalise(filterstore);

	buffer[bufidx] = input + (filterstore*feedback);

	if(++bufidx>=bufsize) bufidx = 0;

	return output;
}

#endif //_comb_

//ends
