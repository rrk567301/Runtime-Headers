@class NSString, NSObject;
@protocol OS_dispatch_queue, PLMomentGenerationThrottleTimeProvider;

@interface PLMomentGenerationThrottle : NSObject {
    char _canDelayAnyQOS;
    id /* block */ _targetBlock;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_targetQueue;
    _Atomic BOOL _shouldRunAgain;
    _Atomic BOOL _isExecutingOrConsideringExecution;
    double _lastRunDuration;
    double _lastRunEndTime;
    double _nextExpectedRun;
}

@property (readonly, nonatomic) id<PLMomentGenerationThrottleTimeProvider> timeProvider;
@property (nonatomic) char singleThreaded;

- (void).cxx_destruct;
- (void)update;
- (char)isIdle;
- (void)_doAsyncUpdateWithCompletionBlock:(id /* block */)a0 tryAgainLaterBlock:(id /* block */)a1 tryAgainAfterCurrentExecutionBlock:(id /* block */)a2;
- (id)initWithName:(id)a0 canDelayAnyQOS:(char)a1 singleThreadedMode:(char)a2 timeProvider:(id)a3 targetQueue:(id)a4 target:(id /* block */)a5;

@end
