@class NSString, NSMutableDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface FPDSharedScheduler : NSObject {
    NSObject<OS_xpc_object> *_activity;
    id /* block */ _criteriaBuilder;
    NSString *_label;
    NSMutableDictionary *_executors;
    BOOL _registered;
    long long _alwaysRunnableCount;
    NSDate *_lastRegistrationDate;
    NSDate *_lastTriggerDate;
    NSDate *_lastUsageDate;
    NSDate *_lastDeferralDate;
    BOOL _preventRunning;
    BOOL _manualScheduling;
    BOOL _wasCheckedIn;
}

@property (class, readonly) NSObject<OS_dispatch_queue> *queue;

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
- (void)removeKey:(id)a0;
- (void)checkIn;
- (void)ping;
- (BOOL)shouldPause;
- (void)_removeKey:(id)a0;
- (void)markDoneForKey:(id)a0;
- (long long)_contextForActivity:(id)a0;
- (void)addKey:(id)a0 executor:(id /* block */)a1;
- (BOOL)canOrIsForcedToRun;
- (BOOL)canRun;
- (id /* block */)forceRunningWithReason:(id)a0;
- (id)initWithLabel:(id)a0 criteria:(id)a1;
- (id)initWithLabel:(id)a0 criteriaBuilder:(id /* block */)a1;
- (void)registerActivity;
- (BOOL)runIfPossible:(id /* block */)a0;
- (void)unregisterActivity;

@end
