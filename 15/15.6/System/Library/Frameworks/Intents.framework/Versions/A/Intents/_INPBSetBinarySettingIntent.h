@class _INPBSettingMetadata, NSString, _INPBIntentMetadata, _INPBTemporalEventTrigger;

@interface _INPBSetBinarySettingIntent : PBCodable <_INPBSetBinarySettingIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char binaryValue : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int binaryValue;
@property (nonatomic) char hasBinaryValue;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (retain, nonatomic) _INPBSettingMetadata *settingMetadata;
@property (readonly, nonatomic) char hasSettingMetadata;
@property (retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger;
@property (readonly, nonatomic) char hasTemporalEventTrigger;
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
- (int)StringAsBinaryValue:(id)a0;
- (id)binaryValueAsString:(int)a0;

@end
