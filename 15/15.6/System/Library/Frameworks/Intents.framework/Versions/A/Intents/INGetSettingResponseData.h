@class NSString, INNumericSettingValue, INSettingMetadata;

@interface INGetSettingResponseData : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) INSettingMetadata *settingMetadata;
@property (readonly, copy) INNumericSettingValue *numericValue;
@property (readonly) long long boundedValue;
@property (readonly) long long binaryValue;
@property (readonly, copy) NSString *labeledValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithSettingMetadata:(id)a0 numericValue:(id)a1 boundedValue:(long long)a2 binaryValue:(long long)a3 labeledValue:(id)a4;

@end
