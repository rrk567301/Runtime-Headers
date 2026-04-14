@interface HMSettingIntegerValue : HMImmutableSettingValue

@property (readonly) long long integerValue;

- (id)initWithPayload:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)initWithIntegerValue:(long long)a0;
- (id)initWithProtoPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;

@end
