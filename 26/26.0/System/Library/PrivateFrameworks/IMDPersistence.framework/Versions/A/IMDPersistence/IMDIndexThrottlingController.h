@class NSTimer, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IMDIndexThrottlingController : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long throttleState;
@property (readonly, nonatomic) NSMutableDictionary *throttles;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL isThrottled;

+ (id)sharedController;

- (void)_timerFired;
- (BOOL)_cleanup;
- (void)_save;
- (void)_rescheduleTimer;
- (void)reload;
- (id)init;
- (void)_reload;
- (void).cxx_destruct;
- (void)_finishThrottlingForIdentifier:(id)a0;
- (void)_cleanupAndSaveOnlyIfCleanedUp:(BOOL)a0;
- (void)isThrottledWithCompletionBlock:(id /* block */)a0;
- (void)_beginThrottlingForIdentifier:(id)a0 untilDate:(id)a1;
- (long long)_calculateThrottleState;
- (BOOL)_isThrottled;
- (id)_nextExpiringThrottle;
- (id)_stringForThrottleState:(long long)a0;
- (void)_updateThrottleState;
- (void)beginThrottlingForIdentifier:(id)a0 untilDate:(id)a1;
- (void)finishThrottlingForIdentifier:(id)a0;
- (BOOL)shouldDeferIndexingActionWithContext:(id)a0;
- (void)timerFired;

@end
