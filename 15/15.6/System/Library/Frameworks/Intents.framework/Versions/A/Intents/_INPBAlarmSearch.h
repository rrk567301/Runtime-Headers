@class NSString, _INPBDataString, _INPBDateTimeRangeValue;

@interface _INPBAlarmSearch : PBCodable <_INPBAlarmSearch, NSSecureCoding, NSCopying> {
    struct { unsigned char alarmReferenceType : 1; unsigned char alarmSearchStatus : 1; unsigned char includeSleepAlarm : 1; unsigned char isMeridianInferred : 1; unsigned char period : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int alarmReferenceType;
@property (nonatomic) char hasAlarmReferenceType;
@property (nonatomic) int alarmSearchStatus;
@property (nonatomic) char hasAlarmSearchStatus;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasIdentifier;
@property (nonatomic) char includeSleepAlarm;
@property (nonatomic) char hasIncludeSleepAlarm;
@property (nonatomic) char isMeridianInferred;
@property (nonatomic) char hasIsMeridianInferred;
@property (retain, nonatomic) _INPBDataString *label;
@property (readonly, nonatomic) char hasLabel;
@property (nonatomic) int period;
@property (nonatomic) char hasPeriod;
@property (retain, nonatomic) _INPBDateTimeRangeValue *time;
@property (readonly, nonatomic) char hasTime;
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
- (int)StringAsAlarmReferenceType:(id)a0;
- (int)StringAsAlarmSearchStatus:(id)a0;
- (id)periodAsString:(int)a0;
- (int)StringAsPeriod:(id)a0;
- (id)alarmReferenceTypeAsString:(int)a0;
- (id)alarmSearchStatusAsString:(int)a0;

@end
