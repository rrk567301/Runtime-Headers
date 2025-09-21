@class NSString;

@interface HMSettingStringValue : HMImmutableSettingValue

@property (readonly, copy) NSString *stringValue;

- (id)attributeDescriptions;
- (id)initWithPayload:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStringValue:(id)a0;
- (id)initWithProtoPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;

@end
