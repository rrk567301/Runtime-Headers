@interface HMDAccessoryBrowserXPCMessageSendPolicyParameters : HMDXPCMessageSendPolicyParameters

@property (nonatomic, getter=isBrowsing) BOOL browsing;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEntitlements:(unsigned long long)a0 browsing:(BOOL)a1;
- (id)signature;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (unsigned long long)hash;

@end
