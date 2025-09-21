@class _INPBDateTimeRangeValue, NSArray, NSString, _INPBIntentMetadata, _INPBLocation;

@interface _INPBFindEventsIntent : PBCodable <_INPBFindEventsIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char requestedEventAttribute : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBDateTimeRangeValue *dateTimeRange;
@property (readonly, nonatomic) char hasDateTimeRange;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (retain, nonatomic) _INPBLocation *location;
@property (readonly, nonatomic) char hasLocation;
@property (copy, nonatomic) NSArray *participants;
@property (readonly, nonatomic) unsigned long long participantsCount;
@property (nonatomic) int requestedEventAttribute;
@property (nonatomic) char hasRequestedEventAttribute;
@property (copy, nonatomic) NSString *searchQuery;
@property (readonly, nonatomic) char hasSearchQuery;
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
- (int)StringAsRequestedEventAttribute:(id)a0;
- (id)requestedEventAttributeAsString:(int)a0;

@end
