@class _INPBDateTimeRangeValue, NSString, NSArray, _INPBLocation;

@interface _INPBCalendarEvent : PBCodable <_INPBCalendarEvent, NSSecureCoding, NSCopying> {
    struct { unsigned char isContactBirthday : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *calendarPunchoutURI;
@property (readonly, nonatomic) char hasCalendarPunchoutURI;
@property (retain, nonatomic) _INPBDateTimeRangeValue *dateTimeRange;
@property (readonly, nonatomic) char hasDateTimeRange;
@property (copy, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) char hasEventIdentifier;
@property (nonatomic) char isContactBirthday;
@property (nonatomic) char hasIsContactBirthday;
@property (retain, nonatomic) _INPBLocation *location;
@property (readonly, nonatomic) char hasLocation;
@property (copy, nonatomic) NSArray *participants;
@property (readonly, nonatomic) unsigned long long participantsCount;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)participantsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addParticipants:(id)a0;
- (void)clearParticipants;
- (id)participantsAtIndex:(unsigned long long)a0;

@end
