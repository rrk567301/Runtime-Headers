@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_os_log, OS_dispatch_source;

@interface CBDisplayLink : NSObject <CBClockSource> {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _frameNotificationBlock;
    unsigned long long _displayID;
    NSObject<OS_os_log> *_logHandle;
    BOOL _valid;
    double _sMachTimebaseFactor;
    unsigned long long _submissionInterval;
    unsigned long long _submissionIntervalLeeway;
    unsigned long long _currentTimerTarget;
    unsigned int _displayTimerPort;
    NSObject<OS_dispatch_source> *_displayTimerDispatchSource;
}

@property (nonatomic) unsigned long long preferredFramesPerSecond;
@property (readonly, nonatomic) unsigned long long previousFrameTimestamp;
@property (readonly, nonatomic) unsigned long long nextFrameTimestamp;
@property (readonly, nonatomic) unsigned long long frameInterval;
@property (readonly, nonatomic) unsigned long long expectedDelay;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pause;
- (void)cancelTimer;
- (void)dealloc;
- (void)invalidate;
- (void)setTimer:(unsigned long long)a0;
- (void)resume;
- (id)copyStatusInfo;
- (unsigned long long)getTimerTarget:(unsigned long long)a0 withCurrentTime:(unsigned long long)a1;
- (unsigned long long)updateFrameTimingWithTargetTime;
- (void)disableClocking;
- (void)invalidateTimer;
- (void)displayTimerDispatchSourceHandler;
- (void)enableClocking;
- (unsigned long long)getPreferedFrameInterval;
- (id)initWithDisplayId:(unsigned long long)a0;
- (BOOL)isDisplayTimingValid:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; })a0;
- (void)scheduleWithDispatchQueue:(id)a0;
- (void)setFrameNotificationBlock:(id /* block */)a0;
- (void)timerClockHandler;

@end
