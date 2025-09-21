@interface HMDXPCBackgroundMessagePolicy : HMFMessagePolicy

@property (readonly) char requiresEntitlement;

+ (id)defaultPolicy;
+ (id)policyWithEntitlementRequirement:(char)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)__initWithEntitlementRequirement:(char)a0;

@end
