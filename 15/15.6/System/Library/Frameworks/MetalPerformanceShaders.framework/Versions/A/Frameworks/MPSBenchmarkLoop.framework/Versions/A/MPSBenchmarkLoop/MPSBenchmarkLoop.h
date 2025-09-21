@class MPSCounters, NSObject;
@protocol MTLDevice, OS_dispatch_semaphore, MTLCommandQueue, MTLCommandQueueSPI;

@interface MPSBenchmarkLoop : NSObject {
    id<MTLCommandQueue> _commandQueueNonCounter;
    id<MTLCommandQueueSPI> _commandQueueSPI;
    NSObject<OS_dispatch_semaphore> *_loopRunningSemaphore;
    char _encoderCoalescing;
    char _useInterposer;
}

@property (readonly, retain, nonatomic) MPSCounters *counters;
@property (readonly, retain, nonatomic) id<MTLDevice> device;
@property (readonly, retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (nonatomic) char sampleMemory;
@property (nonatomic) char useInterposer;
@property (nonatomic) unsigned long long numberOfCommandBuffersEncoded;
@property (nonatomic) char isAutoTuning;

- (void)dealloc;
- (id)initWithDevice:(id)a0;
- (id)benchmarkCPUWorkload:(id)a0 maxIterations:(unsigned long long)a1;
- (id)benchmarkUsingCPUTimeStampsWorkload:(id)a0;
- (id)benchmarkUsingCPUTimeStampsWorkload:(id)a0 maxInnerIterations:(unsigned long long)a1 maxOuterIterations:(unsigned long long)a2;
- (id)benchmarkWithWorkload:(id)a0 withExtraRequestedCounter:(id)a1 convergeOn:(unsigned long long)a2 includingBlitSamples:(char)a3;
- (id)benchmarkWithWorkload:(id)a0 withExtraRequestedCounter:(id)a1 convergeOn:(unsigned long long)a2 includingBlitSamples:(char)a3 maxInnerIterations:(unsigned long long)a4 maxOuterIterations:(unsigned long long)a5;
- (char)encoderCoalescing;
- (void)printAllAvailableCounters;
- (id)runWorkloadOnce:(id)a0 capturingGPUTrace:(char)a1;
- (void)setEncoderCoalescing:(char)a0;

@end
