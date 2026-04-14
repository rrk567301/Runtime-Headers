@class NSSet, NSUUID;

@interface DMFWebsitePolicyMonitor : NSObject

@property (class, readonly, copy, nonatomic) NSSet *policyTypes;

@property (readonly, copy, nonatomic) NSUUID *identifier;

- (void)requestPoliciesForWebsites:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)hasAnyRestrictivePoliciesWithError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithPolicyChangeHandler:(id /* block */)a0;
- (void)dealloc;
- (void)hasAnyRestrictivePoliciesWithCompletionHandler:(id /* block */)a0;

@end
