@interface HMSettingBooleanValue : HMImmutableSettingValue

@property (readonly) BOOL boolValue;

- (id)attributeDescriptions;
- (id)initWithPayload:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithBoolValue:(BOOL)a0;
- (id)initWithProtoPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;

@end
