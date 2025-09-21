@interface HMDHomeManagerXPCMessageSendPolicy : HMDXPCMessageSendPolicy

@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) unsigned long long entitlements;
@property (readonly, nonatomic, getter=isActive) char active;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)attributeDescriptions;
- (char)canSendWithPolicyParameters:(id)a0;
- (id)initWithEntitlements:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)initWithEntitlements:(unsigned long long)a0 options:(unsigned long long)a1 active:(char)a2;

@end
