@interface HMDHomeManagerXPCMessageSendPolicyParameters : HMDXPCMessageSendPolicyParameters <NSCopying, NSMutableCopying>

@property (getter=isActive) char active;
@property (readonly, nonatomic) unsigned long long options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)signature;
- (id)attributeDescriptions;
- (id)initWithEntitlements:(unsigned long long)a0 options:(unsigned long long)a1;

@end
