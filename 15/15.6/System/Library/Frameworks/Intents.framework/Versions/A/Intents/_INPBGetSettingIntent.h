@class _INPBSettingMetadata, NSString, _INPBIntentMetadata;

@interface _INPBGetSettingIntent : PBCodable <_INPBGetSettingIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char confirmationValue : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int confirmationValue;
@property (nonatomic) char hasConfirmationValue;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
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
- (int)StringAsConfirmationValue:(id)a0;
- (id)confirmationValueAsString:(int)a0;

@end
