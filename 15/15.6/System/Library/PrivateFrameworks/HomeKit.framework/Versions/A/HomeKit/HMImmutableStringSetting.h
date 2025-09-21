@class NSString;

@interface HMImmutableStringSetting : HMImmutableSetting

@property (readonly, copy) NSString *stringValue;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithKeyPath:(id)a0 readOnly:(char)a1 payload:(id)a2;
- (id)initWithKeyPath:(id)a0 readOnly:(char)a1 stringValue:(id)a2;
- (id)initWithProtoPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;
- (id)settingValue;
- (id)settingWithSettingValue:(id)a0;

@end
