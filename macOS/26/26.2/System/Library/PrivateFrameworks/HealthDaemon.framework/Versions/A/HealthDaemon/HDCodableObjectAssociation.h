@class NSData, HDCodableSyncIdentity;

@interface HDCodableObjectAssociation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAssociationUuid;
@property (retain, nonatomic) NSData *associationUuid;
@property (readonly, nonatomic) BOOL hasObjectUuids;
@property (retain, nonatomic) NSData *objectUuids;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (id)decodedAssociationUUID;
- (id)initWithAssociationUUID:(id)a0;

@end
