#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <stdint.h>
#include <cstdlib>

const int SND_FAILURE = EXIT_FAILURE;
const int SND_SUCCESS = EXIT_SUCCESS;
const int RCV_FAILURE = EXIT_FAILURE;
const int RCV_SUCCESS = EXIT_SUCCESS;

const uint8_t FT205 	   = 0;
const uint8_t FT742 	   = 1;
const uint8_t TRISONICA    = 2;

const uint8_t STATUS_READY = 0;

typedef struct {
	double time_, ch4, et, h2o, p, t, rf, lon, lat, lsr;
} oplsData;

#endif
