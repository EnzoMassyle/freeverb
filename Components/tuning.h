// Reverb model tuning values
//
// Written by Jezar at Dreampoint, June 2000
// http://www.dreampoint.co.uk
// This code is public domain
#ifndef _tuning_
#define _tuning_

const int	numcombs		= 8;
const int	numallpasses	= 4;
const float	muted			= 0;
const float	fixedgain		= 0.015f;
const float scalewet		= 2.5f;  // Reduced from 3 to reduce excessive wet reverb noise
const float scaledry		= 2;
const float scaledamp		= 1.0f;
const float scaleroom		= 0.22f; // Reduced from 0.28 to shorten reverb tail
const float offsetroom		= 0.7f;
const float initialroom		= 0.5f;
const float initialdamp		= 0.75f; // Fixed typo and increased for stronger high-frequency attenuation
const float initialwet		= 1/scalewet;
const float initialdry		= 0;
const float initialwidth	= 1;
const float initialmode		= 0;
const float freezemode		= 0.5f;
const int	stereospread	= 23;

// These values assume 44.1KHz sample rate
// The values were obtained by listening tests.
const int combtuningL1		= 1050; // Reduced from 1116 to smooth decay
const int combtuningR1		= 1050+stereospread;
const int combtuningL2		= 1120; // Reduced from 1188
const int combtuningR2		= 1120+stereospread;
const int combtuningL3		= 1215; // Reduced from 1277
const int combtuningR3		= 1215+stereospread;
const int combtuningL4		= 1290; // Reduced from 1356
const int combtuningR4		= 1290+stereospread;
const int combtuningL5		= 1360; // Reduced from 1422
const int combtuningR5		= 1360+stereospread;
const int combtuningL6		= 1435; // Reduced from 1491
const int combtuningR6		= 1435+stereospread;
const int combtuningL7		= 1500; // Reduced from 1557
const int combtuningR7		= 1500+stereospread;
const int combtuningL8		= 1560; // Reduced from 1617
const int combtuningR8		= 1560+stereospread;

const int allpasstuningL1	= 500;  // Reduced from 556 for smoother transients
const int allpasstuningR1	= 500+stereospread;
const int allpasstuningL2	= 400;  // Reduced from 441
const int allpasstuningR2	= 400+stereospread;
const int allpasstuningL3	= 310;  // Reduced from 341
const int allpasstuningR3	= 310+stereospread;
const int allpasstuningL4	= 210;  // Reduced from 225
const int allpasstuningR4	= 210+stereospread;

#endif //_tuning_

//ends

