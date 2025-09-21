@class NSString, CSDMessagingHandle;

@interface CSDMessagingMemberAssociationClaim : PBCodable <NSCopying> {
    struct { unsigned char primaryIdentifier : 1; unsigned char type : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) char hasPrimaryHandle;
@property (retain, nonatomic) CSDMessagingHandle *primaryHandle;
@property (nonatomic) char hasPrimaryIdentifier;
@property (nonatomic) unsigned long long primaryIdentifier;
@property (readonly, nonatomic) char hasPrimaryAvcIdentifier;
@property (retain, nonatomic) NSString *primaryAvcIdentifier;
@property (readonly, nonatomic) char hasAssociatedPseudonym;
@property (retain, nonatomic) CSDMessagingHandle *associatedPseudonym;
@property (readonly, nonatomic) char hasConversationGroupUUIDString;
@property (retain, nonatomic) NSString *conversationGroupUUIDString;
@property (nonatomic) char hasType;
@property (nonatomic) int type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)tuAssociationForHandle:(id)a0;

@end
