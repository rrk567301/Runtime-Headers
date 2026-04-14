@interface HMDXPCBackgroundMessagePolicy : HMFMessagePolicy

@property (readonly) BOOL requiresEntitlement;

+ (id)policyWithEntitlementRequirement:(BOOL)a0;
+ (id)defaultPolicy;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)__initWithEntitlementRequirement:(BOOL)a0;
- (unsigned long long)hash;

@end
