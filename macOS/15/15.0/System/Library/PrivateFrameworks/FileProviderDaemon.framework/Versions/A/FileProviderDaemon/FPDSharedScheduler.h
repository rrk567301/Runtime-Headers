@class NSString, NSMapTable, NSDate, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object, OS_dispatch_source;

@interface FPDSharedScheduler : NSObject {
    NSObject<OS_xpc_object> *_activity;
    id /* block */ _criteriaBuilder;
    long long _options;
    struct _xpc_activity_eligibility_changed_handler_s { } *_changeHandler;
    NSString *_label;
    NSMapTable *_watchers;
    BOOL _registered;
    long long _alwaysRunnableCount;
    NSObject<OS_dispatch_source> *_unregistrationTimer;
    NSDate *_lastRegistrationDate;
    NSDate *_lastUnregistrationDate;
    NSDate *_lastTriggerDate;
    NSDate *_lastUsageDate;
    NSDate *_lastDeferralDate;
    BOOL _preventRunning;
    BOOL _manualScheduling;
    BOOL _wasCheckedIn;
}

@property (class, readonly) NSObject<OS_dispatch_queue> *queue;
@property (class) BOOL disableDelayedUnregistration;

@property BOOL preventRunning;
@property (getter=useManualScheduling) BOOL manualScheduling;
@property (readonly) BOOL hasRegisteredExecutors;
@property (readonly) long long registrationCount;
@property (readonly) NSString *label;
@property (readonly, getter=isRegistered) BOOL registered;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly) NSDate *lastRegistrationDate;
@property (readonly) NSDate *lastTriggerDate;
@property (readonly) NSDate *lastUsageDate;
@property (readonly) NSDate *lastDeferralDate;
@property (readonly) long long dasContext;

+ (void)checkIn;
+ (id)schedulerWithLabel:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)checkIn;
- (void)ping;
- (void)defer;
- (BOOL)shouldPause;
- (void)registerActivityIfNeeded;
- (id)initWithLabel:(id)a0 options:(long long)a1 criteria:(id)a2;
- (long long)_contextForActivity:(id)a0;
- (void)addWatcher:(id)a0;
- (BOOL)canOrIsForcedToRunCheckingDeferral:(BOOL)a0 reason:(id *)a1;
- (BOOL)canRunCheckingDeferral:(BOOL)a0 reason:(id *)a1;
- (void)cancelDelayedUnregistration;
- (void)completeActivityWithState:(long long)a0;
- (id /* block */)forceRunningWithReason:(id)a0;
- (id)initWithLabel:(id)a0 criteria:(id)a1;
- (id)initWithLabel:(id)a0 criteriaBuilder:(id /* block */)a1;
- (id)initWithLabel:(id)a0 options:(long long)a1 criteriaBuilder:(id /* block */)a2;
- (void)markWatcherDone:(id)a0;
- (void)notifyCanRun;
- (void)notifyIsDeferred;
- (void)registerActivity;
- (void)removeWatcher:(id)a0;
- (BOOL)runIfPossible:(id /* block */)a0;
- (void)unregisterActivityImmediately;
- (void)unregisterActivityWithDelay;
- (void)unregisterActivityWithDelayIfNeeded;
- (void)withReevaluationOfSchedulingState:(id /* block */)a0;

@end
