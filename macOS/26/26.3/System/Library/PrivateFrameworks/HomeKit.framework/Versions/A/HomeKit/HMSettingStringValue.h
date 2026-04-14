@class NSString;

@interface HMSettingStringValue : HMImmutableSettingValue

@property (readonly, copy) NSString *stringValue;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithPayload:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithStringValue:(id)a0;
- (id)initWithProtoPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;

@end
