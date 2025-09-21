@class NSString, _INPBDateTime, _INPBValueMetadata, _INPBRecurrenceValue;

@interface _INPBDateTimeRangeValue : PBCodable <_INPBDateTimeRangeValue, NSSecureCoding, NSCopying> {
    struct { unsigned char allDay : 1; unsigned char endCalendar : 1; unsigned char startCalendar : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char allDay;
@property (nonatomic) char hasAllDay;
@property (nonatomic) long long endCalendar;
@property (nonatomic) char hasEndCalendar;
@property (retain, nonatomic) _INPBDateTime *endDateTime;
@property (readonly, nonatomic) char hasEndDateTime;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) _INPBRecurrenceValue *recurrence;
@property (readonly, nonatomic) char hasRecurrence;
@property (nonatomic) long long startCalendar;
@property (nonatomic) char hasStartCalendar;
@property (retain, nonatomic) _INPBDateTime *startDateTime;
@property (readonly, nonatomic) char hasStartDateTime;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (readonly, nonatomic) char hasValueMetadata;
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

@end
