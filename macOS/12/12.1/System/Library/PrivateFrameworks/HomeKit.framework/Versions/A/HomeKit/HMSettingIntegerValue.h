@interface HMSettingIntegerValue : HMImmutableSettingValue

@property (readonly) long long integerValue;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithPayload:(id)a0;
- (id)initWithIntegerValue:(long long)a0;
- (id)attributeDescriptions;
- (id)payloadCopy;
- (id)protoPayload;
- (id)initWithProtoPayload:(id)a0;

@end
