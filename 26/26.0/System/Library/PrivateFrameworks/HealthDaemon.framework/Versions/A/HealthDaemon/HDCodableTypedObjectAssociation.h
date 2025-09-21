@class NSData, HDCodableSyncIdentity;

@interface HDCodableTypedObjectAssociation : PBCodable <NSCopying> {
    struct { unsigned char behavior : 1; unsigned char creationDate : 1; unsigned char type : 1; unsigned char deleted : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAssociationUUID;
@property (retain, nonatomic) NSData *associationUUID;
@property (readonly, nonatomic) BOOL hasObjectUUIDs;
@property (retain, nonatomic) NSData *objectUUIDs;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;
@property (nonatomic) BOOL hasType;
@property (nonatomic) long long type;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL deleted;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) double creationDate;
@property (readonly, nonatomic) BOOL hasSubObjectUUID;
@property (retain, nonatomic) NSData *subObjectUUID;
@property (nonatomic) BOOL hasBehavior;
@property (nonatomic) long long behavior;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)decodedAssociationUUID;
- (id)decodedCreationDate;
- (id)decodedSubObjectUUID;
- (id)initWithIntermediateSyncAssociation:(id)a0;

@end
