@interface HMSettingBooleanValue : HMImmutableSettingValue

@property (readonly) BOOL boolValue;

- (id)initWithPayload:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)initWithBoolValue:(BOOL)a0;
- (id)initWithProtoPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;

@end
