@class NSString;

@interface _INPBLocalTime : PBCodable <_INPBLocalTime, NSSecureCoding, NSCopying> {
    struct { unsigned char hourOfDay : 1; unsigned char millisOfSecond : 1; unsigned char minuteOfHour : 1; unsigned char secondOfMinute : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long hourOfDay;
@property (nonatomic) char hasHourOfDay;
@property (nonatomic) long long millisOfSecond;
@property (nonatomic) char hasMillisOfSecond;
@property (nonatomic) long long minuteOfHour;
@property (nonatomic) char hasMinuteOfHour;
@property (nonatomic) long long secondOfMinute;
@property (nonatomic) char hasSecondOfMinute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
