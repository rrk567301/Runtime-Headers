@class NSString, SCDANotifyObserver, AFInstanceContext, SCDAWatchdogTimer, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SCDAMonitor : NSObject <SCDANotifyObserverDelegate> {
    long long _state;
    AFInstanceContext *_instanceContext;
    NSMutableArray *_completions;
    SCDAWatchdogTimer *_timer;
    SCDAWatchdogTimer *_fetchRepostedMyriadDecisionTimer;
    NSObject<OS_dispatch_queue> *_myriadMonitorQueue;
    double _myriadEventMonitorTimeout;
    BOOL _isRegisteredForMyriadEventNotification;
    BOOL _ignoreMyriadEvents;
    BOOL _isMonitoring;
}

@property (retain, nonatomic) SCDANotifyObserver *beginObserver;
@property (retain, nonatomic) SCDANotifyObserver *wonObserver;
@property (retain, nonatomic) SCDANotifyObserver *lostObserver;
@property (retain, nonatomic) SCDANotifyObserver *repostedWonObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitor;
+ (void)initialize;

- (void)_clear;
- (BOOL)isMonitoring;
- (void)dealloc;
- (id)init;
- (void)notifyObserver:(id)a0 didChangeStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)notifyObserver:(id)a0 didReceiveNotificationWithToken:(int)a1;
- (void)stopMonitoring;
- (void).cxx_destruct;
- (BOOL)didWin;
- (void)waitForMyriadDecisionForReason:(id)a0 withCompletion:(id /* block */)a1;
- (void)_cancelRepostedMyriadDecisionTimer;
- (void)_dequeueBlocksWithSignal:(long long)a0;
- (void)_deregisterFromMyriadEventNotifications;
- (void)_deregisterFromRepostedDecisionResultsObservers;
- (void)_enqueueBlock:(id /* block */)a0 forReason:(id)a1;
- (id)_fetchCurrentMyriadDecisionWithWaitTime:(double)a0;
- (void)_flushCompletions:(BOOL)a0;
- (id)_myriadStateToString:(long long)a0;
- (void)_registerForMyriadEvents;
- (void)_resultSeenWithValue:(BOOL)a0;
- (void)_setDecisionIsPending;
- (void)dequeueBlocksWaitingForMyriadDecision;
- (void)ignoreMyriadEvents:(BOOL)a0;
- (void)startMonitoringWithTimeoutInterval:(double)a0 instanceContext:(id)a1;

@end
