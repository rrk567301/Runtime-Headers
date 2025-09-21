@class NSString, _INPBNumericSettingValue, _INPBSettingMetadata;

@interface _INPBGetSettingResponseData : PBCodable <_INPBGetSettingResponseData, NSSecureCoding, NSCopying> {
    struct { unsigned char binaryValue : 1; unsigned char boundedValue : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int binaryValue;
@property (nonatomic) char hasBinaryValue;
@property (nonatomic) int boundedValue;
@property (nonatomic) char hasBoundedValue;
@property (copy, nonatomic) NSString *labeledValue;
@property (readonly, nonatomic) char hasLabeledValue;
@property (retain, nonatomic) _INPBNumericSettingValue *numericValue;
@property (readonly, nonatomic) char hasNumericValue;
@property (retain, nonatomic) _INPBSettingMetadata *settingMetadata;
@property (readonly, nonatomic) char hasSettingMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsBoundedValue:(id)a0;
- (int)StringAsBinaryValue:(id)a0;
- (id)binaryValueAsString:(int)a0;
- (id)boundedValueAsString:(int)a0;

@end
