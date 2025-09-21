@class NSData, HDCodableSyncIdentity;

@interface HDCodableTypedObjectAssociation : PBCodable <NSCopying> {
    struct { unsigned char creationDate : 1; unsigned char type : 1; unsigned char deleted : 1; } _has;
}

@property (readonly, nonatomic) char hasAssociationUUID;
@property (retain, nonatomic) NSData *associationUUID;
@property (readonly, nonatomic) char hasObjectUUIDs;
@property (retain, nonatomic) NSData *objectUUIDs;
@property (readonly, nonatomic) char hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;
@property (nonatomic) char hasType;
@property (nonatomic) long long type;
@property (nonatomic) char hasDeleted;
@property (nonatomic) char deleted;
@property (nonatomic) char hasCreationDate;
@property (nonatomic) double creationDate;
@property (readonly, nonatomic) char hasSubObjectUUID;
@property (retain, nonatomic) NSData *subObjectUUID;

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
- (id)decodedAssociationUUID;
- (id)decodedCreationDate;
- (id)decodedSubObjectUUID;
- (id)initWithIntermediateSyncAssociation:(id)a0;

@end
