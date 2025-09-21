@interface HMDAccessoryBrowserXPCMessageSendPolicy : HMDXPCMessageSendPolicy

@property (readonly) unsigned long long requiredEntitlements;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)attributeDescriptions;
- (char)canSendWithPolicyParameters:(id)a0;
- (id)initWithRequiredEntitlements:(unsigned long long)a0;

@end
