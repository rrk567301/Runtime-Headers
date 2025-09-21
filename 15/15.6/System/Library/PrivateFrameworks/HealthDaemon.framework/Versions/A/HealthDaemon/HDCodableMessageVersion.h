@interface HDCodableMessageVersion : PBCodable <NSCopying> {
    struct { unsigned char compatibilityVersion : 1; unsigned char entityVersion : 1; } _has;
}

@property (nonatomic) char hasEntityVersion;
@property (nonatomic) int entityVersion;
@property (nonatomic) char hasCompatibilityVersion;
@property (nonatomic) int compatibilityVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
