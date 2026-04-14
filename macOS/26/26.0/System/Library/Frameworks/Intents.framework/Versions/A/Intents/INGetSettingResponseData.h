@class NSString, INNumericSettingValue, INSettingMetadata;

@interface INGetSettingResponseData : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

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

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)initWithSettingMetadata:(id)a0 numericValue:(id)a1 boundedValue:(long long)a2 binaryValue:(long long)a3 labeledValue:(id)a4;

@end
