@class SiriAnalyticsLogicalClocksProvider, SiriAnalyticsRootClock, SiriAnalyticsMetastore, SiriAnalyticsTimePeriodBuffer, NSObject, SiriAnalyticsDebounce;
@protocol OS_dispatch_queue, SiriAnalyticsWhiteRoseDelegate, OS_dispatch_source;

@interface SiriAnalyticsWhiteRose : NSObject <SiriAnalyticsDebounceDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    id<SiriAnalyticsWhiteRoseDelegate> _delegate;
    SiriAnalyticsRootClock *_activeClock;
    NSObject<OS_dispatch_source> *_inactivityTimer;
    double _maximumInactivityInterval;
    NSObject<OS_dispatch_source> *_maximumClockLifeTimer;
    double _maximumClockLifeInterval;
    SiriAnalyticsMetastore *_metastore;
    SiriAnalyticsTimePeriodBuffer *_clockPulseTimer;
    SiriAnalyticsDebounce *_clockPulse;
    SiriAnalyticsLogicalClocksProvider *_logicalClocks;
}

- (void)_cancelInactivityTimer;
- (void)sensitiveCondition:(int)a0 startedAt:(unsigned long long)a1 ensureClockExists:(BOOL)a2 completion:(id /* block */)a3;
- (void)_destroyActiveClockWithReason:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_maximumClockLifeExpired;
- (void)createTag:(id)a0 completion:(id /* block */)a1;
- (void)bootstrapWithCompletion:(id /* block */)a0;
- (void)destroyActiveClockWithReason:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_cancelMaximumClockLifeTimer;
- (id)markTimeForAnnotatedMessage:(id)a0 withRootClock:(id)a1;
- (void)_pulseActiveClock;
- (void)_ensureActiveClockStartingAt:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_startInactivityTimer;
- (void)_startMaximumClockLifeTimer;
- (id)initWithQueue:(id)a0 delegate:(id)a1 metastore:(id)a2 logicalClocks:(id)a3;
- (void)_inactivityTimerElapsed;
- (void)markTimeForAnnotatedMessages:(id)a0 completion:(id /* block */)a1;
- (void)debounceFired:(id)a0 maximumReached:(BOOL)a1;
- (void)sensitiveCondition:(int)a0 endedAt:(unsigned long long)a1 ensureClockExists:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
