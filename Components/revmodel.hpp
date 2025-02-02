// Reverb model declaration
//
// Written by Jezar at Dreampoint, June 2000
// http://www.dreampoint.co.uk
// This code is public domain

#ifndef _revmodel_
#define _revmodel_

#include "comb.hpp"
#include "allpass.hpp"
#include "tuning.h"

class revmodel
{
public:
					revmodel();
			void	mute();
			void	processmix(double *inputL, double *inputR, double *outputL, double *outputR, long numsamples, int skip);
			void	processreplace(double *inputL, double *inputR, double *outputL, double *outputR, long numsamples, int skip);
			void	setroomsize(double value);
			double	getroomsize();
			void	setdamp(double value);
			double	getdamp();
			void	setwet(double value);
			double	getwet();
			void	setdry(double value);
			double	getdry();
			void	setwidth(double value);
			double	getwidth();
			void	setmode(double value);
			double	getmode();
private:
			void	update();
private:
	double	gain;
	double	roomsize,roomsize1;
	double	damp,damp1;
	double	wet,wet1,wet2;
	double	dry;
	double	width;
	double	mode;

	// The following are all declared inline 
	// to remove the need for dynamic allocation
	// with its subsequent error-checking messiness

	// Comb filters
	comb	combL[numcombs];
	comb	combR[numcombs];

	// Allpass filters
	allpass	allpassL[numallpasses];
	allpass	allpassR[numallpasses];

	// Buffers for the combs
	double	bufcombL1[combtuningL1];
	double	bufcombR1[combtuningR1];
	double	bufcombL2[combtuningL2];
	double	bufcombR2[combtuningR2];
	double	bufcombL3[combtuningL3];
	double	bufcombR3[combtuningR3];
	double	bufcombL4[combtuningL4];
	double	bufcombR4[combtuningR4];
	double	bufcombL5[combtuningL5];
	double	bufcombR5[combtuningR5];
	double	bufcombL6[combtuningL6];
	double	bufcombR6[combtuningR6];
	double	bufcombL7[combtuningL7];
	double	bufcombR7[combtuningR7];
	double	bufcombL8[combtuningL8];
	double	bufcombR8[combtuningR8];

	// Buffers for the allpasses
	double	bufallpassL1[allpasstuningL1];
	double	bufallpassR1[allpasstuningR1];
	double	bufallpassL2[allpasstuningL2];
	double	bufallpassR2[allpasstuningR2];
	double	bufallpassL3[allpasstuningL3];
	double	bufallpassR3[allpasstuningR3];
	double	bufallpassL4[allpasstuningL4];
	double	bufallpassR4[allpasstuningR4];
};

#endif//_revmodel_

//ends