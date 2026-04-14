@class NSData, HDCodableSyncIdentity;

@interface HDCodableObjectAssociation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAssociationUuid;
@property (retain, nonatomic) NSData *associationUuid;
@property (readonly, nonatomic) BOOL hasObjectUuids;
@property (retain, nonatomic) NSData *objectUuids;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)decodedAssociationUUID;
- (id)initWithAssociationUUID:(id)a0;

@end
