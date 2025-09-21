@interface HMSettingBooleanValue : HMImmutableSettingValue

@property (readonly) char boolValue;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithPayload:(id)a0;
- (id)initWithBoolValue:(char)a0;
- (id)attributeDescriptions;
- (id)initWithProtoPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;

@end
