@interface HMDXPCMessagePolicy : HMFMessagePolicy

@property (readonly) unsigned long long entitlements;

+ (id)policyWithEntitlements:(unsigned long long)a0;
+ (id)defaultPolicy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)__initWithEntitlements:(unsigned long long)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
