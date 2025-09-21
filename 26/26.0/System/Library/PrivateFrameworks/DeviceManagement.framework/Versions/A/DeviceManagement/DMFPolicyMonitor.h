@class NSSet, NSXPCConnection, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface DMFPolicyMonitor : NSObject

@property (class, readonly, copy, nonatomic) NSSet *allEffectivePolicyTypes;

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) int firstUnlockToken;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *firstUnlockQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *registrationCallbackQueue;
@property (readonly, nonatomic) NSMutableDictionary *notificationTokensByPolicyMonitorIdentifier;
@property (readonly, nonatomic) NSMutableArray *pendingRequests;

+ (id)policyMonitor;
+ (const char *)mobileKeyBagFirstUnlockNotificationName;
+ (BOOL)hasFirstUnlocked;
+ (id)remoteInterface;

- (id)requestPoliciesForTypes:(id)a0 withError:(id *)a1;
- (void)invalidatePolicyMonitor:(id)a0;
- (void)requestPoliciesForBundleIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)requestPoliciesForWebsiteURLs:(id)a0 completionHandler:(id /* block */)a1;
- (void)addRegistration:(id)a0 forPolicyMonitorIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)requestCommunicationPoliciesForBundleIdentifiers:(id)a0 withError:(id *)a1;
- (id)initWithXPCConnection:(id)a0;
- (id)init;
- (void)allExpiredScreenTimeBudgetsWithCompletionHandler:(id /* block */)a0;
- (void)requestCommunicationPoliciesForBundleIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)filterForExpiredBudgetIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)requestPoliciesForBundleIdentifiers:(id)a0 withError:(id *)a1;
- (void)_dispatchRequest:(id /* block */)a0;
- (id)allExpiredScreenTimeBudgetsWithError:(id *)a0;
- (void)requestPoliciesForTypes:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestPoliciesForCategoryIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)filterForExpiredBudgetIdentifiers:(id)a0 withError:(id *)a1;
- (void).cxx_destruct;

@end
