@class HDCodableEntityIdentifier, HDCodableSyncVersionRange;

@interface HDCodableSyncEntityVersionRange : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasEntityIdentifier;
@property (retain, nonatomic) HDCodableEntityIdentifier *entityIdentifier;
@property (readonly, nonatomic) char hasVersionRange;
@property (retain, nonatomic) HDCodableSyncVersionRange *versionRange;

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

@end
