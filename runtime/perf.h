#if !defined(CAUSAL_RUNTIME_PERF_H)
#define CAUSAL_RUNTIME_PERF_H

void startSampling(size_t cycles, int signum);
long long getTripCount(uintptr_t pc);
void shutdownPerf();

#endif