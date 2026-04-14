@class HDCodableEntityIdentifier;

@interface HDCodableSyncAnchorRange : PBCodable <NSCopying> {
    struct { unsigned char endAnchor : 1; unsigned char entityType : 1; unsigned char startAnchor : 1; } _has;
}

@property (nonatomic) BOOL hasEntityType;
@property (nonatomic) long long entityType;
@property (nonatomic) BOOL hasStartAnchor;
@property (nonatomic) long long startAnchor;
@property (nonatomic) BOOL hasEndAnchor;
@property (nonatomic) long long endAnchor;
@property (readonly, nonatomic) BOOL hasEntityIdentifier;
@property (retain, nonatomic) HDCodableEntityIdentifier *entityIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
