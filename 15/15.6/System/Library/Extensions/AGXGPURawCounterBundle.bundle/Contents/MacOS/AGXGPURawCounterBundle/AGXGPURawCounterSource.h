@class NSArray, NSMutableArray;

@interface AGXGPURawCounterSource : _GPURawCounterSource {
    struct Source { void /* function */ **x0; } *_impl;
    NSArray *_counterList;
    NSArray *_selectedCounterList;
    NSArray *_triggerList;
    NSArray *_selectedTriggerList;
    NSMutableArray *_pollPostProcessBufferList;
}

- (void)dealloc;
- (char)setEnabled:(char)a0;
- (char)isEnabled;
- (id)availableCounters;
- (void)setOptions:(id)a0;
- (char)postProcessRawDataWithRingBufferIndex:(unsigned int)a0 source:(char *)a1 sourceSize:(unsigned long long)a2 sourceRead:(unsigned long long *)a3 sourceWrite:(unsigned long long)a4 output:(char *)a5 outputSize:(unsigned long long)a6 outputRead:(unsigned long long)a7 outputWrite:(unsigned long long *)a8 isLast:(char)a9;
- (id)availableTriggers;
- (unsigned int)drainRingBufferAtIndex:(unsigned int)a0 dataSize:(unsigned int)a1;
- (void)flushRingBuffers;
- (char)pollCountersAtBufferIndex:(unsigned int)a0 withBlock:(id /* block */)a1;
- (char)postProcessRawDataWithRingBufferSource:(char *)a0 sourceSize:(unsigned long long)a1 sourceRead:(unsigned long long *)a2 sourceWrite:(unsigned long long)a3 output:(char *)a4 outputSize:(unsigned long long)a5 outputRead:(unsigned long long)a6 outputWrite:(unsigned long long *)a7 isLast:(char)a8;
- (char)postProcessRawDataWithSource:(char *)a0 sourceSize:(unsigned long long)a1 sourceRead:(unsigned long long *)a2 output:(char *)a3 outputSize:(unsigned long long)a4 outputWritten:(unsigned long long *)a5 isLast:(char)a6;
- (char)requestCounters:(id)a0 firstErrorIndex:(unsigned long long *)a1;
- (char)requestTriggers:(id)a0 firstErrorIndex:(unsigned long long *)a1;
- (void)resetRawDataPostProcessor;
- (char)ringBufferInfoAtIndex:(unsigned int)a0 base:(char **)a1 size:(unsigned int *)a2 dataOffset:(unsigned int *)a3 dataSize:(unsigned int *)a4;
- (unsigned int)ringBufferNum;
- (id)selectedCounters;
- (id)selectedTriggers;
- (char)requestCounter:(id)a0;
- (id)initWithSourceGroup:(id)a0 impl:(struct Source { void /* function */ **x0; } *)a1;

@end
