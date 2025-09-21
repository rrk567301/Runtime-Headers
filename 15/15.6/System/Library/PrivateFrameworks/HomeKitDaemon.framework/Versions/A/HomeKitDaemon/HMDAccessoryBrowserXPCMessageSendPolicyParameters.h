@interface HMDAccessoryBrowserXPCMessageSendPolicyParameters : HMDXPCMessageSendPolicyParameters

@property (nonatomic, getter=isBrowsing) char browsing;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)signature;
- (id)attributeDescriptions;
- (id)initWithEntitlements:(unsigned long long)a0 browsing:(char)a1;

@end
