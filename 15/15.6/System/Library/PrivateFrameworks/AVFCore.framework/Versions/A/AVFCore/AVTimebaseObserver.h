@class AVWeakReference, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AVTimebaseObserver : NSObject {
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_timerSource;
    struct OpaqueCMTimebase { } *_timebase;
    char _isObservingTimebase;
    double _lastRate;
    double _currentRate;
    char _invalid;
}

@property (readonly, nonatomic, getter=_weakReference) AVWeakReference *weakReference;
@property (readonly) struct OpaqueCMTimebase { } *timebase;
@property (readonly, nonatomic) char invalidated;

- (void)dealloc;
- (void)invalidate;
- (void)_attachTimerSourceToTimebase;
- (void)_effectiveRateChanged;
- (void)_finishInitializationWithTimerEventHandler:(id /* block */)a0;
- (void)_handleTimeDiscontinuity;
- (void)_reallyInvalidate;
- (void)_removeTimebaseFromTimerSource;
- (void)_resetNextFireTime;
- (void)_startObservingTimebaseNotifications;
- (void)_stopObservingTimebaseNotifications;
- (id)initWithTimebase:(struct OpaqueCMTimebase { } *)a0 queue:(id)a1;

@end
