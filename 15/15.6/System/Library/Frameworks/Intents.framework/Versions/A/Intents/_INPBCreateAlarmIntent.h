@class _INPBDateTimeRange, NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBCreateAlarmIntent : PBCodable <_INPBCreateAlarmIntent, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _alarmRepeatScheduleOptions;
    struct { unsigned char relativeOffsetInMinutes : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) int *alarmRepeatScheduleOptions;
@property (readonly, nonatomic) unsigned long long alarmRepeatScheduleOptionsCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (retain, nonatomic) _INPBDataString *label;
@property (readonly, nonatomic) char hasLabel;
@property (nonatomic) int relativeOffsetInMinutes;
@property (nonatomic) char hasRelativeOffsetInMinutes;
@property (retain, nonatomic) _INPBDateTimeRange *time;
@property (readonly, nonatomic) char hasTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsAlarmRepeatScheduleOptions:(id)a0;
- (void)clearAlarmRepeatScheduleOptions;
- (void)addAlarmRepeatScheduleOptions:(int)a0;
- (id)alarmRepeatScheduleOptionsAsString:(int)a0;
- (int)alarmRepeatScheduleOptionsAtIndex:(unsigned long long)a0;
- (void)setAlarmRepeatScheduleOptions:(int *)a0 count:(unsigned long long)a1;

@end
