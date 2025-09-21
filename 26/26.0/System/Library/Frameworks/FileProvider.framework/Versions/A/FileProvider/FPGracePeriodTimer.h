@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FPGracePeriodTimer : NSObject {
    id /* block */ _action;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    double _delay;
    NSObject<OS_dispatch_source> *_timer;
    double _expectedFiringTimeSinceReferenceDate;
}

- (void)_createTimer;
- (id)prettyDescription;
- (void)dealloc;
- (id)initWithAction:(id /* block */)a0 callbackQueue:(id)a1 delay:(double)a2;
- (void)arm;
- (void).cxx_destruct;
- (void)suppress;

@end
