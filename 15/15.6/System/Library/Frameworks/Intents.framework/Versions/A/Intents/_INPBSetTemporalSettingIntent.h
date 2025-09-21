@class _INPBDateTimeRangeValue, _INPBSettingMetadata, NSString, _INPBIntentMetadata, _INPBTemporalEventTrigger;

@interface _INPBSetTemporalSettingIntent : PBCodable <_INPBSetTemporalSettingIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char action : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int action;
@property (nonatomic) char hasAction;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (retain, nonatomic) _INPBSettingMetadata *settingMetadata;
@property (readonly, nonatomic) char hasSettingMetadata;
@property (retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger;
@property (readonly, nonatomic) char hasTemporalEventTrigger;
@property (retain, nonatomic) _INPBDateTimeRangeValue *timeValue;
@property (readonly, nonatomic) char hasTimeValue;
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
- (id)actionAsString:(int)a0;
- (int)StringAsAction:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
