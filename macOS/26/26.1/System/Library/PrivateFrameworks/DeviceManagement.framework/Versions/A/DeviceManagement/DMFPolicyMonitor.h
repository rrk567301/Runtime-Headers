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

+ (const char *)mobileKeyBagFirstUnlockNotificationName;
+ (id)remoteInterface;
+ (BOOL)hasFirstUnlocked;
+ (id)policyMonitor;

- (void)requestPoliciesForBundleIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)allExpiredScreenTimeBudgetsWithCompletionHandler:(id /* block */)a0;
- (void)requestPoliciesForCategoryIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)requestPoliciesForBundleIdentifiers:(id)a0 withError:(id *)a1;
- (void)invalidatePolicyMonitor:(id)a0;
- (id)requestCommunicationPoliciesForBundleIdentifiers:(id)a0 withError:(id *)a1;
- (void)requestCommunicationPoliciesForBundleIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)allExpiredScreenTimeBudgetsWithError:(id *)a0;
- (id)initWithXPCConnection:(id)a0;
- (void)requestPoliciesForWebsiteURLs:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestPoliciesForTypes:(id)a0 completionHandler:(id /* block */)a1;
- (id)requestPoliciesForTypes:(id)a0 withError:(id *)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addRegistration:(id)a0 forPolicyMonitorIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)_dispatchRequest:(id /* block */)a0;
- (id)filterForExpiredBudgetIdentifiers:(id)a0 withError:(id *)a1;
- (void)filterForExpiredBudgetIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;

@end
