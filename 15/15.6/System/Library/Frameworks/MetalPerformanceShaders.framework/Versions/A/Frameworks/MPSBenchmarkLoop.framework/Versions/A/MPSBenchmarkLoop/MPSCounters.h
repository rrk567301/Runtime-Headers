@class NSArray, NSString, MPSCounterStatistics, NSObject, NSMutableArray;
@protocol MTLDevice, OS_dispatch_semaphore, MTLCommandQueue, MTLCommandQueueSPI;

@interface MPSCounters : NSObject {
    id<MTLCommandQueueSPI> _commandQueueSPI;
    char _countersSupported;
    char _supportsMultipass;
    NSArray *_allCounters;
    unsigned long long _nAvailableCounters;
    unsigned long long _vendor;
    char _deviceHasCycleCounter;
    NSArray *_counterListsPerPass;
    unsigned long long _nPasses;
    NSArray *_passList;
    NSString *_extraCounterRequested;
    unsigned long long _commandBufferOffset;
    unsigned long long _encoderOffset;
    unsigned long long _commandOffset;
    unsigned long long _timeOffset;
    unsigned long long _cyclesOffset;
    unsigned long long _extraOffset;
    char _countingEncoders;
    NSObject<OS_dispatch_semaphore> *_countingEncodersSemaphore;
    unsigned long long _encodersInWorkload;
    unsigned long long _iterationsDone;
    unsigned long long _numEncodesPerCommandBuffer;
    double _timePerEncode;
    MPSCounterStatistics *_counterStatistics;
    NSMutableArray *_whileCountingData;
}

@property (nonatomic) char encoderCoalescing;
@property (nonatomic) char useInterposer;
@property (readonly, retain, nonatomic) id<MTLDevice> device;
@property (readonly, retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (nonatomic) char logEncoderInfo;

- (void)dealloc;
- (void)startSampling;
- (void)disableCounters;
- (void)aggregatePerfSamplesForCommandBuffer:(id)a0 firstCommandBuffer:(id)a1;
- (int)countEncodersInWorkload:(id)a0 withExtraRequestedCounter:(id)a1 forStatistics:(id)a2 userSpecifiedIterations:(char)a3 includingBlitSamples:(char)a4;
- (int)enableCountersIncludingBlitSamples:(char)a0;
- (id)initWithCommandQueue:(id)a0 addQeueuPerfSampleHandler:(char)a1;
- (void)perfSampleHandlerWithCommandBuffer:(id)a0 data:(id)a1 numberOfSamples:(unsigned long long)a2;
- (void)printAllAvailableCounters;
- (int)requestCountersWithExtraRequestedCounter:(id)a0;
- (int)requestCountersWithExtraRequestedCounter:(id)a0 fillStats:(id)a1;

@end
