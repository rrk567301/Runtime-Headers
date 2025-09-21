@class NSString, SCDANotifyObserver, AFInstanceContext, SCDAWatchdogTimer, SCDAQueue, NSObject;
@protocol OS_dispatch_queue;

@interface SCDAMonitor : NSObject <SCDANotifyObserverDelegate> {
    long long _state;
    AFInstanceContext *_instanceContext;
    SCDAQueue *_completions;
    SCDANotifyObserver *_beginObserver;
    SCDANotifyObserver *_wonObserver;
    SCDANotifyObserver *_lostObserver;
    SCDANotifyObserver *_repostedWonObserver;
    SCDAWatchdogTimer *_timer;
    SCDAWatchdogTimer *_fetchRepostedMyriadDecisionTimer;
    NSObject<OS_dispatch_queue> *_myriadMonitorQueue;
    double _myriadEventMonitorTimeout;
    char _isRegisteredForMyriadEventNotification;
    char _ignoreMyriadEvents;
    char _isMonitoring;
    char _ignoreRepostMyriadNotification;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedMonitor;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stopMonitoring;
- (char)isMonitoring;
- (void)_clear;
- (char)didWin;
- (void)notifyObserver:(id)a0 didChangeStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)notifyObserver:(id)a0 didReceiveNotificationWithToken:(int)a1;
- (void)waitForMyriadDecisionForReason:(id)a0 withCompletion:(id /* block */)a1;
- (void)_cancelRepostedMyriadDecisionTimer;
- (void)_dequeueBlocksWithSignal:(long long)a0;
- (void)_deregisterFromMyriadEventNotifications;
- (void)_deregisterFromRepostedDecisionResultsObservers;
- (void)_enqueueBlock:(id /* block */)a0 forReason:(id)a1;
- (id)_fetchCurrentMyriadDecisionWithWaitTime:(double)a0;
- (void)_flushCompletions:(char)a0;
- (void)_ignoreRepostMyriadNotification:(char)a0;
- (id)_myriadStateToString:(long long)a0;
- (void)_registerForMyriadEvents;
- (void)_resultSeenWithValue:(char)a0;
- (void)_setDecisionIsPending;
- (void)dequeueBlocksWaitingForMyriadDecision;
- (void)ignoreMyriadEvents:(char)a0;
- (void)startMonitoringWithTimeoutInterval:(double)a0;
- (void)startMonitoringWithTimeoutInterval:(double)a0 instanceContext:(id)a1;
- (void)waitForMyriadDecisionWithCompletion:(id /* block */)a0;

@end
