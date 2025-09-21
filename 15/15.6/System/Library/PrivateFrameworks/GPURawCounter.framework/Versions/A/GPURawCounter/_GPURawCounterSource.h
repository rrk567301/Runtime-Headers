@class NSString, NSDictionary;
@protocol GPURawCounterSourceGroup;

@interface _GPURawCounterSource : NSObject <GPURawCounterSource>

@property (readonly) NSString *name;
@property (readonly) id<GPURawCounterSourceGroup> sourceGroup;
@property (copy) NSDictionary *options;
@property (readonly, copy) NSDictionary *features;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (char)setEnabled:(char)a0;
- (char)isEnabled;
- (char)setEnabled:(char)a0 error:(id *)a1;
- (id)availableCounters;
- (char)postProcessRawDataWithRingBufferIndex:(unsigned int)a0 source:(char *)a1 sourceSize:(unsigned long long)a2 sourceRead:(unsigned long long *)a3 sourceWrite:(unsigned long long)a4 output:(char *)a5 outputSize:(unsigned long long)a6 outputRead:(unsigned long long)a7 outputWrite:(unsigned long long *)a8 isLast:(char)a9;
- (char)postProcessRawDataWithRingBufferSource:(char *)a0 sourceSize:(unsigned long long)a1 sourceRead:(unsigned long long *)a2 sourceWrite:(unsigned long long)a3 output:(char *)a4 outputSize:(unsigned long long)a5 outputRead:(unsigned long long)a6 outputWrite:(unsigned long long *)a7 isLast:(char)a8 error:(id *)a9;
- (id)availableTriggers;
- (unsigned int)drainRingBufferAtIndex:(unsigned int)a0 dataSize:(unsigned int)a1;
- (unsigned int)drainRingBufferAtIndex:(unsigned int)a0 dataSize:(unsigned int)a1 error:(id *)a2;
- (void)flushRingBuffers;
- (id)initWithSourceGroup:(id)a0 name:(id)a1;
- (char)pollCountersAtBufferIndex:(unsigned int)a0 withBlock:(id /* block */)a1;
- (char)pollCountersAtBufferIndex:(unsigned int)a0 withBlock:(id /* block */)a1 error:(id *)a2;
- (char)postProcessRawDataWithRingBufferIndex:(unsigned int)a0 source:(char *)a1 sourceSize:(unsigned long long)a2 sourceRead:(unsigned long long *)a3 sourceWrite:(unsigned long long)a4 output:(char *)a5 outputSize:(unsigned long long)a6 outputRead:(unsigned long long)a7 outputWrite:(unsigned long long *)a8 isLast:(char)a9 error:(id *)a10;
- (char)postProcessRawDataWithRingBufferSource:(char *)a0 sourceSize:(unsigned long long)a1 sourceRead:(unsigned long long *)a2 sourceWrite:(unsigned long long)a3 output:(char *)a4 outputSize:(unsigned long long)a5 outputRead:(unsigned long long)a6 outputWrite:(unsigned long long *)a7 isLast:(char)a8;
- (char)postProcessRawDataWithSource:(char *)a0 sourceSize:(unsigned long long)a1 sourceRead:(unsigned long long *)a2 output:(char *)a3 outputSize:(unsigned long long)a4 outputWritten:(unsigned long long *)a5 isLast:(char)a6;
- (char)postProcessRawDataWithSource:(char *)a0 sourceSize:(unsigned long long)a1 sourceRead:(unsigned long long *)a2 output:(char *)a3 outputSize:(unsigned long long)a4 outputWritten:(unsigned long long *)a5 isLast:(char)a6 error:(id *)a7;
- (char)requestCounters:(id)a0 firstErrorIndex:(unsigned long long *)a1;
- (char)requestCounters:(id)a0 firstErrorIndex:(unsigned long long *)a1 error:(id *)a2;
- (char)requestTriggers:(id)a0 firstErrorIndex:(unsigned long long *)a1;
- (char)requestTriggers:(id)a0 firstErrorIndex:(unsigned long long *)a1 error:(id *)a2;
- (void)resetRawDataPostProcessor;
- (char)ringBufferInfoAtIndex:(unsigned int)a0 base:(char **)a1 size:(unsigned int *)a2 dataOffset:(unsigned int *)a3 dataSize:(unsigned int *)a4;
- (char)ringBufferInfoAtIndex:(unsigned int)a0 base:(char **)a1 size:(unsigned int *)a2 dataOffset:(unsigned int *)a3 dataSize:(unsigned int *)a4 error:(id *)a5;
- (unsigned int)ringBufferNum;
- (id)selectedCounters;
- (id)selectedTriggers;

@end
