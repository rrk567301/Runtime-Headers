@class NSSet, NSDictionary, NSUUID;

@interface DMFCommunicationPolicyMonitor : NSObject

@property (class, readonly, copy, nonatomic) NSSet *policyTypes;
@property (class, readonly, copy, nonatomic) NSSet *communicationBundleIdentifiers;

@property (copy) NSDictionary *policiesByBundleIdentifier;
@property (nonatomic) BOOL didFetchInitialPolicies;
@property (readonly, copy, nonatomic) NSUUID *identifier;

+ (id)new;
+ (unsigned long long)communicationPolicyForApplicationPolicy:(id)a0 downtimeEnforced:(BOOL)a1;

- (void)dealloc;
- (id)initWithPolicyChangeHandler:(id /* block */)a0;
- (id)init;
- (id)requestPoliciesByBundleIdentifierWithError:(id *)a0;
- (void)requestPoliciesByBundleIdentifierWithCompletionHandler:(id /* block */)a0;
- (void)_updatePoliciesByBundleIdentifier;
- (void).cxx_destruct;

@end
