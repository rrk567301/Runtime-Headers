@class NSMutableDictionary, NSTimer, IMIndexThrottleMonitor, NSObject;
@protocol OS_dispatch_queue;

@interface IMDIndexThrottlingController : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long throttleState;
@property (readonly, nonatomic) NSMutableDictionary *throttles;
@property (readonly, nonatomic) NSMutableDictionary *historicalThrottles;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL isThrottled;
@property (readonly, nonatomic) IMIndexThrottleMonitor *throttleMonitor;

+ (id)sharedController;

- (void)_save;
- (void)reload;
- (BOOL)_cleanup;
- (void)_timerFired;
- (void)_rescheduleTimer;
- (void).cxx_destruct;
- (id)init;
- (void)_reload;
- (void)_cleanupAndSaveOnlyIfCleanedUp:(BOOL)a0;
- (void)_finishThrottlingForIdentifier:(id)a0;
- (void)isThrottledWithCompletionBlock:(id /* block */)a0;
- (void)_beginThrottlingForIdentifier:(id)a0 error:(id)a1 untilDate:(id)a2;
- (long long)_calculateThrottleState;
- (BOOL)_cleanupHistoricalThrottles;
- (BOOL)_cleanupThrottles;
- (BOOL)_isThrottled;
- (id)_nextExpiringThrottle;
- (void)_recordHistoricalThrottleForIdentifier:(id)a0 error:(id)a1 untilDate:(id)a2;
- (id)_stringForThrottleState:(long long)a0;
- (void)_updateThrottleState;
- (void)beginThrottlingForIdentifier:(id)a0 error:(id)a1 untilDate:(id)a2;
- (void)finishThrottlingForIdentifier:(id)a0;
- (id)initWithThrottleMonitor:(id)a0;
- (BOOL)shouldDeferIndexingActionWithContext:(id)a0;
- (void)timerFired;

@end
