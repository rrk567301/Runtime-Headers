@class NSString;

@interface HMDXPCMessageSendPolicyParameters : HMFObject

@property (readonly, nonatomic) unsigned long long entitlements;
@property (readonly, copy) NSString *signature;

- (id)initWithEntitlements:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
