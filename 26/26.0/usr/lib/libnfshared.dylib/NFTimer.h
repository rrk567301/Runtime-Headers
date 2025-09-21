@class NSObject;
@protocol OS_dispatch_source;

@interface NFTimer : NSObject {
    NSObject<OS_dispatch_source> *_src;
    unsigned long long _popTimeInSeconds;
    BOOL _monotonic;
}

- (double)remainingTime;
- (id)initSleepTimerWithCallback:(id /* block */)a0 queue:(id)a1;
- (void)stopTimer;
- (void)startTimer:(double)a0;
- (void)dealloc;
- (void)startTimer:(double)a0 leeway:(double)a1;
- (id)description;
- (id)initWithCallback:(id /* block */)a0 queue:(id)a1;
- (void).cxx_destruct;

@end
