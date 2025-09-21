@class NSString, NSTimer, BKSProcessAssertion, NSObject;
@protocol OS_dispatch_queue;

@interface MTBackgroundAssertion : NSObject {
    NSString *_name;
    NSTimer *_invalidationTimer;
    BKSProcessAssertion *_assertion;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly, nonatomic, getter=isValid) char valid;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidate;
- (void)_cancelInvalidationTimer;
- (void)_createScheduledTimerWithInterval:(double)a0;
- (void)_invalidationTimerFired;
- (id)initWithName:(id)a0 flags:(unsigned int)a1 reason:(unsigned int)a2;
- (void)invalidateAfterDelay:(double)a0;

@end
