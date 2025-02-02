// Comb filter implementation
//
// Written by Jezar at Dreampoint, June 2000
// http://www.dreampoint.co.uk
// This code is public domain

#include "comb.hpp"

comb::comb()
{
	filterstore = 0;
	bufidx = 0;
}

void comb::setbuffer(double *buf, int size) 
{
	buffer = buf; 
	bufsize = size;
}

void comb::mute()
{
	for (int i=0; i<bufsize; i++)
		buffer[i]=0;
}

void comb::setdamp(double val) 
{
	damp1 = val; 
	damp2 = 1-val;
}

double comb::getdamp() 
{
	return damp1;
}

void comb::setfeedback(double val) 
{
	feedback = val;
}

double comb::getfeedback() 
{
	return feedback;
}

// ends
