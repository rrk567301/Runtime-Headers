@interface MPSGPURawCounters : MPSCounters {
    unsigned long long _maxFrequency;
    unsigned long long _maxPState;
}

- (void)dealloc;
- (void)startSampling;
- (void)disableCounters;
- (void)aggregatePerfSamplesForCommandBuffer:(id)a0 firstCommandBuffer:(id)a1;
- (int)countEncodersInWorkload:(id)a0 withExtraRequestedCounter:(id)a1 forStatistics:(id)a2 userSpecifiedIterations:(char)a3 includingBlitSamples:(char)a4;
- (int)enableCountersIncludingBlitSamples:(char)a0;
- (void)getPStateAndFrequency;
- (id)initWithCommandQueue:(id)a0 addQeueuPerfSampleHandler:(char)a1;
- (int)requestCountersWithExtraRequestedCounter:(id)a0;
- (int)requestCountersWithExtraRequestedCounter:(id)a0 fillStats:(id)a1;

@end
