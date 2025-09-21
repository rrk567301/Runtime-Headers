@class HDCodableEntityIdentifier;

@interface HDCodableSyncAnchorRange : PBCodable <NSCopying> {
    struct { unsigned char endAnchor : 1; unsigned char entityType : 1; unsigned char startAnchor : 1; } _has;
}

@property (nonatomic) char hasEntityType;
@property (nonatomic) long long entityType;
@property (nonatomic) char hasStartAnchor;
@property (nonatomic) long long startAnchor;
@property (nonatomic) char hasEndAnchor;
@property (nonatomic) long long endAnchor;
@property (readonly, nonatomic) char hasEntityIdentifier;
@property (retain, nonatomic) HDCodableEntityIdentifier *entityIdentifier;

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
