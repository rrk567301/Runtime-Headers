@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_xpcActivityRegisterQueue;
}

@property (readonly, nonatomic) NSMutableDictionary *xpcActivitiesByCKActivityIdentifier;
@property double delayAfterXPCActivityRegister;
@property (readonly, nonatomic) NSMutableDictionary *handlersByCKActivityIdentifier;

+ (id)xpcActivityIdentifierForCKActivityIdentifier:(id)a0;
+ (id)activityFromXPCActivity:(id)a0;
+ (id)sharedScheduler;
+ (id)identifierWithImmediateInvocationForIdentifier:(id)a0;

- (void)registerActivityIdentifier:(id)a0 replaceExistingHandler:(BOOL)a1 handler:(id /* block */)a2;
- (id)suggestedXPCActivityCriteriaForActivity:(id)a0;
- (void)unregisterActivityIdentifier:(id)a0;
- (void)setXPCActivity:(id)a0 forActivityIdentifier:(id)a1;
- (BOOL)isXPCActivityPending:(id)a0;
- (void)cancelActivityWithIdentifier:(id)a0;
- (id)init;
- (void)submitActivity:(id)a0 completionHandler:(id /* block */)a1;
- (id)initInternal;
- (void)registerActivityIdentifier:(id)a0 handler:(id /* block */)a1;
- (id)activityForActivityIdentifier:(id)a0;
- (id)xpcActivityForActivityWithIdentifier:(id)a0;
- (long long)currentPriorityForActivityIdentifier:(id)a0;
- (BOOL)hasPendingActivityWithActivityIdentifier:(id)a0;
- (void)unregisterHandlerForActivityIdentifier:(id)a0;
- (void)performAsyncOnQueue:(id /* block */)a0;
- (void).cxx_destruct;
- (void)submitActivity:(id)a0;

@end
