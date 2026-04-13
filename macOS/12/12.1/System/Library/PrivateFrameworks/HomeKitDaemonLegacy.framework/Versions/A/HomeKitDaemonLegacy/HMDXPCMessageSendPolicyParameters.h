@interface HMDXPCMessageSendPolicyParameters : NSObject

@property (readonly, nonatomic) unsigned long long entitlements;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)signature;
- (id)initWithEntitlements:(unsigned long long)a0;

@end
