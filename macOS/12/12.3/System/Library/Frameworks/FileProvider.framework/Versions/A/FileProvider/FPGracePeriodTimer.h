@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FPGracePeriodTimer : NSObject {
    id /* block */ _action;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    double _delay;
    NSObject<OS_dispatch_source> *_timer;
    double _expectedFiringTimeSinceReferenceDate;
}

- (void).cxx_destruct;
- (void)arm;
- (id)prettyDescription;
- (void)suppress;
- (void)_createTimer;
- (id)initWithAction:(id /* block */)a0 callbackQueue:(id)a1 delay:(double)a2;

@end
