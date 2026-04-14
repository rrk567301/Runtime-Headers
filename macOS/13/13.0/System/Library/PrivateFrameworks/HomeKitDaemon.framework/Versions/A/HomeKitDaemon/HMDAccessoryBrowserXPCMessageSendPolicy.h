@interface HMDAccessoryBrowserXPCMessageSendPolicy : HMDXPCMessageSendPolicy

@property (readonly) unsigned long long requiredEntitlements;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (BOOL)canSendWithPolicyParameters:(id)a0;
- (id)initWithRequiredEntitlements:(unsigned long long)a0;

@end
