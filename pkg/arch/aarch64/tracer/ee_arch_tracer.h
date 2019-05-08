#ifndef	OSEE_ARCH_TRACER_H
#define	OSEE_ARCH_TRACER_H

#include "ee_hal.h"

#define	LOG_SIZE	2048
#define	EV_START	0x1
#define	EV_END		0x2

struct event {
	uint8_t 	type;
	uint64_t	ip;
	uint64_t	pip;
	uint64_t	arg1;
	uint64_t	arg2;
	uint64_t	arg3;
	uint64_t	arg4;
	uint64_t	time;
};


typedef void (*tracer_func_t)(uint64_t ip, uint64_t parent_ip, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4);

void tracer_enable(void);
void tracer_disable(void);

#endif	//OSEE_ARCH_TRACER_H

