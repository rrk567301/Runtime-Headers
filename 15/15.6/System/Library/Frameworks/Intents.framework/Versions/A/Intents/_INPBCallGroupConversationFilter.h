@class _INPBCallGroup, NSArray, _INPBContact, NSString;

@interface _INPBCallGroupConversationFilter : PBCodable <_INPBCallGroupConversationFilter, NSSecureCoding, NSCopying> {
    struct { unsigned char matchCallerAndParticipantsExactly : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBCallGroup *callGroup;
@property (readonly, nonatomic) char hasCallGroup;
@property (retain, nonatomic) _INPBContact *caller;
@property (readonly, nonatomic) char hasCaller;
@property (nonatomic) char matchCallerAndParticipantsExactly;
@property (nonatomic) char hasMatchCallerAndParticipantsExactly;
@property (copy, nonatomic) NSArray *participants;
@property (readonly, nonatomic) unsigned long long participantsCount;
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
