@class SiriAnalyticsRootClock, NSObject;
@protocol OS_dispatch_queue, SiriAnalyticsWhiteRoseDelegate, OS_dispatch_source;

@interface SiriAnalyticsWhiteRose : NSObject <SiriAnalyticsSensitiveConditionsObserverDelegate> {
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
- (void)_cancelInactivityTimer;
- (void)_startInactivityTimer;
- (void)_ensureActiveClockWithCompletion:(id /* block */)a0;
- (void)_startMaximumClockLifeTimer;
- (void)_cancelMaximumClockLifeTimer;
- (void)_inactivityTimerElapsed;
- (void)_destroyActiveClock;
- (void)_maximumClockLifeExpired;
- (void)sensitiveCondition:(unsigned long long)a0 startedAt:(unsigned long long)a1;
- (void)sensitiveCondition:(unsigned long long)a0 endedAt:(unsigned long long)a1;
- (void)markTimeForAnnotatedMessages:(id)a0 completion:(id /* block */)a1;

@end
