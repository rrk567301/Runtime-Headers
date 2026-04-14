@class NSString, NSMutableDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface FPDSharedScheduler : NSObject {
    NSObject<OS_xpc_object> *_activity;
    NSObject<OS_xpc_object> *_criteria;
    NSString *_label;
    NSMutableDictionary *_executors;
    BOOL _registered;
    long long _alwaysRunnableCount;
    NSDate *_lastRegistrationDate;
    NSDate *_lastTriggerDate;
    NSDate *_lastUsageDate;
    BOOL _preventRunning;
}

@property (class, readonly) NSObject<OS_dispatch_queue> *queue;

@property BOOL preventRunning;

- (id)description;
- (void).cxx_destruct;
- (void)removeKey:(id)a0;
- (void)ping;
- (BOOL)shouldPause;
- (void)_removeKey:(id)a0;
- (BOOL)canRun;
- (BOOL)canOrIsForcedToRun;
- (void)unregisterActivity;
- (void)registerActivity;
- (id)initWithLabel:(id)a0 criteria:(id)a1;
- (void)markDoneForKey:(id)a0;
- (void)addKey:(id)a0 executor:(id /* block */)a1;
- (BOOL)runIfPossible:(id /* block */)a0;
- (id /* block */)forceRunningWithReason:(id)a0;

@end
