@interface HMDHomeManagerXPCMessageSendPolicyParameters : HMDXPCMessageSendPolicyParameters <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) unsigned long long options;
@property (readonly, getter=isActive) BOOL active;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)signature;
- (id)initWithEntitlements:(unsigned long long)a0 options:(unsigned long long)a1;

@end
