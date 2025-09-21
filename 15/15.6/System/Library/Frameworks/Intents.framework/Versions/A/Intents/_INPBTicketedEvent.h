@class _INPBDateTimeRange, _INPBLocationValue, NSString;

@interface _INPBTicketedEvent : PBCodable <_INPBTicketedEvent, NSSecureCoding, NSCopying> {
    struct { unsigned char category : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int category;
@property (nonatomic) char hasCategory;
@property (retain, nonatomic) _INPBDateTimeRange *eventDuration;
@property (readonly, nonatomic) char hasEventDuration;
@property (retain, nonatomic) _INPBLocationValue *location;
@property (readonly, nonatomic) char hasLocation;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasName;
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
- (int)StringAsCategory:(id)a0;
- (id)categoryAsString:(int)a0;

@end
