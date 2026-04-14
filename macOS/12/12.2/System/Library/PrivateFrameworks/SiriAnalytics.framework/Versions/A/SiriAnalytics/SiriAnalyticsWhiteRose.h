@class SiriAnalyticsRootClock, NSObject;
@protocol OS_dispatch_queue, SiriAnalyticsWhiteRoseDelegate, OS_dispatch_source;

@interface SiriAnalyticsWhiteRose : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<SiriAnalyticsWhiteRoseDelegate> _delegate;
    SiriAnalyticsRootClock *_activeClock;
    SiriAnalyticsRootClock *_trailingClock;
    NSObject<OS_dispatch_source> *_inactivityTimer;
    double _maximumInactivityInterval;
    NSObject<OS_dispatch_source> *_maximumClockLifeTimer;
    double _maximumClockLifeInterval;
}

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (id)_ensureActiveClock;
- (void)_cancelInactivityTimer;
- (void)_startInactivityTimer;
- (void)_startMaximumClockLifeTimer;
- (void)_cancelMaximumClockLifeTimer;
- (void)_inactivityTimerElapsed;
- (void)_destroyActiveClock;
- (void)_maximumClockLifeExpired;
- (void)markTimeForAnnotatedMessages:(id)a0 completion:(id /* block */)a1;

@end
