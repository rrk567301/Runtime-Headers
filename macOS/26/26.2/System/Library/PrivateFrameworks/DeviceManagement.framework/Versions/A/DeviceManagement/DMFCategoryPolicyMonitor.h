@class NSSet, NSUUID;

@interface DMFCategoryPolicyMonitor : NSObject

@property (class, readonly, copy, nonatomic) NSSet *policyTypes;

@property (readonly, copy, nonatomic) NSUUID *identifier;

- (id)initWithPolicyChangeHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)requestPoliciesForCategoryIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;

@end
