@interface HMSettingBooleanValue : HMImmutableSettingValue

@property (readonly) BOOL boolValue;

- (unsigned long long)hash;
- (id)initWithPayload:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)initWithBoolValue:(BOOL)a0;
- (id)initWithProtoPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;

@end
