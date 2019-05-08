#include "ee_arch_tracer.h"

struct event trace [LOG_SIZE];
static uint16_t curr = 0;

void trace_function(uint64_t ip, uint64_t parent_ip, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4);

__attribute__ ((no_instrument_function))
void trace_function(uint64_t ip, uint64_t parent_ip, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)
{
	trace[curr].type = EV_START;
	trace[curr].ip = ip;
	trace[curr].pip = parent_ip;
	trace[curr].arg1	 = arg1;
	trace[curr].arg2	 = arg2;
	trace[curr].arg3	 = arg3;
	trace[curr].arg4	 = arg4;
	trace[curr].time = osEE_aarch64_gtimer_ticks_to_ns(osEE_aarch64_gtimer_get_ticks());
	curr=(curr+1)%LOG_SIZE;
}

// Set equal to &trace_function from tracing from beginning (e.g. main function)
tracer_func_t tracer_ptr = &trace_function;

__attribute__ ((no_instrument_function))
void tracer_enable(void)
{
	tracer_ptr = &trace_function;
}

__attribute__ ((no_instrument_function))
void tracer_disable(void)
{
	tracer_ptr = NULL;
}
