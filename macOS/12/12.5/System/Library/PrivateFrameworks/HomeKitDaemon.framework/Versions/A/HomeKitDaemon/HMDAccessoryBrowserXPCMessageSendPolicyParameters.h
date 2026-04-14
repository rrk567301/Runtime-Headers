@interface HMDAccessoryBrowserXPCMessageSendPolicyParameters : HMDXPCMessageSendPolicyParameters

@property (nonatomic, getter=isBrowsing) BOOL browsing;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)signature;
- (id)attributeDescriptions;
- (id)initWithEntitlements:(unsigned long long)a0 browsing:(BOOL)a1;

@end
