@class NSArray, _INPBAlarm, NSString;

@interface _INPBUpdateAlarmIntentResponse : PBCodable <_INPBUpdateAlarmIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *conflictAlarms;
@property (readonly, nonatomic) unsigned long long conflictAlarmsCount;
@property (retain, nonatomic) _INPBAlarm *updatedAlarm;
@property (readonly, nonatomic) char hasUpdatedAlarm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)conflictAlarmsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addConflictAlarms:(id)a0;
- (void)clearConflictAlarms;
- (id)conflictAlarmsAtIndex:(unsigned long long)a0;

@end
