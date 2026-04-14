@interface HMDXPCBackgroundMessagePolicy : HMFMessagePolicy

@property (readonly) BOOL requiresEntitlement;

+ (id)policyWithEntitlementRequirement:(BOOL)a0;
+ (id)defaultPolicy;

- (id)__initWithEntitlementRequirement:(BOOL)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
