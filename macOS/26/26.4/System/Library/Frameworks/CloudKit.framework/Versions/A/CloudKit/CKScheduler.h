@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly, nonatomic) NSMutableDictionary *handlersByCKActivityIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *earliestStartDateBySchedulerActivityIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *activitiesPendingResubmitByActivityIdentifier;

+ (id)sharedScheduler;
+ (id)contextForActivity:(id)a0;
+ (id)sanitizedTaskIdentifierForIdentifier:(id)a0;
+ (id)suggestedTaskRequestForActivity:(id)a0;
+ (void)populateTaskRequest:(id)a0 withXPCActivityCriteriaOverrides:(id)a1;

- (void)submitActivity:(id)a0 completionHandler:(id /* block */)a1;
- (void)submitActivity:(id)a0;
- (id)activityForActivityIdentifier:(id)a0;
- (void)unregisterHandlerForActivityIdentifier:(id)a0;
- (id)initInternal;
- (void)unregisterActivityIdentifier:(id)a0;
- (void)registerActivityIdentifier:(id)a0 replaceExistingHandler:(BOOL)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)deregisterActivityWithIdentifier:(id)a0;
- (void)registerActivityIdentifier:(id)a0 handler:(id /* block */)a1;
- (id)init;
- (void)cancelActivityWithIdentifier:(id)a0;
- (BOOL)hasPendingActivityWithActivityIdentifier:(id)a0;
- (void)handleDeferredResultForTask:(id)a0 activityIdentifier:(id)a1;

@end
