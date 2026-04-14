@interface HMDXPCMessagePolicy : HMFMessagePolicy

@property (readonly) unsigned long long entitlements;

+ (id)policyWithEntitlements:(unsigned long long)a0;
+ (id)defaultPolicy;

- (id)init;
- (id)__initWithEntitlements:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
