@interface CKDPZonePermittedCryptoFeatureSet : PBCodable <NSCopying> {
    struct { unsigned char minimumSchemaVersion : 1; } _has;
}

@property (nonatomic) BOOL hasMinimumSchemaVersion;
@property (nonatomic) int minimumSchemaVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
