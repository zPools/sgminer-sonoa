#ifndef SONOA_H
#define SONOA_H

#include "miner.h"

extern int sonoa_test(unsigned char *pdata, const unsigned char *ptarget,
			uint32_t nonce);
extern void sonoa_regenhash(struct work *work);

#endif /* SONOA_H */
