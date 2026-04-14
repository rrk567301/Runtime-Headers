@class NSNumber, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface CKScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_group> *_xpcActivityRegisterGroup;
    NSMutableDictionary *_handlersByCKActivityIdentifier;
}

@property (copy, nonatomic) NSNumber *fakeDeviceCount;
@property (retain, nonatomic) NSMutableDictionary *xpcActivitiesByCKActivityIdentifier;

+ (id)sharedScheduler;
+ (id)xpcActivityIdentifierForCKActivityIdentifier:(id)a0;
+ (id)activityFromXPCActivity:(id)a0;
+ (id)identifierWithImmediateInvocationForIdentifier:(id)a0;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)submitActivity:(id)a0;
- (void)unregisterActivityIdentifier:(id)a0;
- (void)registerActivityIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)registerActivityIdentifier:(id)a0 replaceExistingHandler:(BOOL)a1 handler:(id /* block */)a2;
- (void)unregisterHandlerForActivityIdentifier:(id)a0;
- (void)cancelActivityWithIdentifier:(id)a0;
- (id)xpcActivityForActivityWithIdentifier:(id)a0;
- (void)getSuggestedXPCActivityCriteriaForActivity:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)hasPendingActivityWithActivityIdentifier:(id)a0;
- (BOOL)isXPCActivityPending:(id)a0;
- (id)activityForActivityIdentifier:(id)a0;
- (long long)currentPriorityForActivityIdentifier:(id)a0;
- (void)performAsyncOnQueue:(id /* block */)a0;

@end
