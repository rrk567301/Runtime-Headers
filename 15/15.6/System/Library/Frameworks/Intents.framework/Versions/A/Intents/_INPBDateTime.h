@class _INPBLocalDate, _INPBLocalTime, NSString;

@interface _INPBDateTime : PBCodable <_INPBDateTime, NSSecureCoding, NSCopying> {
    struct { unsigned char calendarSystem : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int calendarSystem;
@property (nonatomic) char hasCalendarSystem;
@property (retain, nonatomic) _INPBLocalDate *date;
@property (readonly, nonatomic) char hasDate;
@property (retain, nonatomic) _INPBLocalTime *time;
@property (readonly, nonatomic) char hasTime;
@property (copy, nonatomic) NSString *timeZoneID;
@property (readonly, nonatomic) char hasTimeZoneID;
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
- (int)StringAsCalendarSystem:(id)a0;
- (id)calendarSystemAsString:(int)a0;

@end
