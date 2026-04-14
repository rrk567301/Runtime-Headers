@class NSString, VCDispatchTimer;

@interface VCObject : NSObject {
    id _reportingAgent;
    VCDispatchTimer *_timeoutTimer;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _timeoutMutex;
}

@property (retain, nonatomic) NSString *logPrefix;
@property (nonatomic) struct opaqueRTCReporting { } *reportingAgent;

- (void)dealloc;
- (id)init;
- (void)lock;
- (void)unlock;
- (void)startDeallocTimer;
- (void)startTimeoutTimer;
- (void)stopTimeoutTimer;
- (void)startDeallocTimerWithTimeout:(unsigned int)a0;
- (void)stopTerminationTimer;
- (void)startTerminationTimer:(unsigned int)a0;

@end
