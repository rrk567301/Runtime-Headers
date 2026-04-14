@interface CNAutocompleteSourceInclusionPolicy : NSObject

+ (id)defaultPolicyWithFetchRequest:(id)a0;
+ (id)policyWithFetchRequest:(id)a0;
+ (id)policyForNoContactsAccess;
+ (id)policyWithUserDefaults:(id)a0;
+ (id)policyWithCurrentProcessEntitlements;
+ (id)policyWithPolicies:(id)a0;
+ (id)policyWithValue:(BOOL)a0;

@end
