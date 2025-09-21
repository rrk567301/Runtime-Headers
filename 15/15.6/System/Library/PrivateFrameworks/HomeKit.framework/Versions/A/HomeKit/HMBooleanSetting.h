@interface HMBooleanSetting : HMImmutableSetting

@property (readonly) char boolValue;

- (char)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)initWithKeyPath:(id)a0 readOnly:(char)a1 boolValue:(char)a2;
- (id)initWithKeyPath:(id)a0 readOnly:(char)a1 payload:(id)a2;
- (id)initWithProtoPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;
- (id)settingValue;
- (id)settingWithSettingValue:(id)a0;

@end
