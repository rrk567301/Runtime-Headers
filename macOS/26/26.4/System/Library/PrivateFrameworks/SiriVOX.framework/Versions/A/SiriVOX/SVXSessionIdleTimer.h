@class NSMutableSet;
@protocol SVXPerforming, SVXSessionIdleTimerDelegate;

@interface SVXSessionIdleTimer : NSObject {
    NSMutableSet *_sessionIdleAssertions;
    id<SVXPerforming> _performer;
}

@property (weak, nonatomic) id<SVXSessionIdleTimerDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)_sessionIdleFiredWithAssertion:(id)a0;
- (void)_handleSessionIdleTimerFireEventWithAssertion:(id)a0 timerInterval:(double)a1;
- (void)startSessionIdleTimerWithTimeInterval:(double)a0;
- (void)stopSessionIdleTimer;

@end
