@class NSArray, NSString;

@interface _INPBAddCallParticipantIntentResponse : PBCodable <_INPBAddCallParticipantIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *invites;
@property (readonly, nonatomic) unsigned long long invitesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)invitesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)invitesAtIndex:(unsigned long long)a0;
- (void)addInvites:(id)a0;
- (void)clearInvites;

@end
