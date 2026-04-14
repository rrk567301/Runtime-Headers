@interface HMDXPCMessagePolicy : HMFMessagePolicy

@property (readonly) unsigned long long entitlements;

+ (id)policyWithEntitlements:(unsigned long long)a0;
+ (id)defaultPolicy;

- (id)__initWithEntitlements:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
