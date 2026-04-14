@class HDCodableEntityIdentifier, HDCodableSyncVersionRange;

@interface HDCodableSyncEntityVersionRange : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEntityIdentifier;
@property (retain, nonatomic) HDCodableEntityIdentifier *entityIdentifier;
@property (readonly, nonatomic) BOOL hasVersionRange;
@property (retain, nonatomic) HDCodableSyncVersionRange *versionRange;

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

@end
