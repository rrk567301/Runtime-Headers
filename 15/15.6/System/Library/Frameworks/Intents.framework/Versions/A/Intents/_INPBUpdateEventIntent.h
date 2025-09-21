@class _INPBDateTimeRangeValue, NSArray, NSString, _INPBIntentMetadata, _INPBLocation;

@interface _INPBUpdateEventIntent : PBCodable <_INPBUpdateEventIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char removeLocation : 1; unsigned char updateAllOccurrences : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *addParticipants;
@property (readonly, nonatomic) unsigned long long addParticipantsCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (nonatomic) char removeLocation;
@property (nonatomic) char hasRemoveLocation;
@property (copy, nonatomic) NSArray *removeParticipants;
@property (readonly, nonatomic) unsigned long long removeParticipantsCount;
@property (retain, nonatomic) _INPBDateTimeRangeValue *setDateTimeRange;
@property (readonly, nonatomic) char hasSetDateTimeRange;
@property (retain, nonatomic) _INPBLocation *setLocation;
@property (readonly, nonatomic) char hasSetLocation;
@property (copy, nonatomic) NSString *setTitle;
@property (readonly, nonatomic) char hasSetTitle;
@property (copy, nonatomic) NSString *targetEventIdentifier;
@property (readonly, nonatomic) char hasTargetEventIdentifier;
@property (nonatomic) char updateAllOccurrences;
@property (nonatomic) char hasUpdateAllOccurrences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)addParticipantsType;
+ (Class)removeParticipantsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAddParticipants:(id)a0;
- (id)addParticipantsAtIndex:(unsigned long long)a0;
- (void)addRemoveParticipants:(id)a0;
- (void)clearAddParticipants;
- (void)clearRemoveParticipants;
- (id)removeParticipantsAtIndex:(unsigned long long)a0;

@end
