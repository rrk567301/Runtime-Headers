@interface NTPBAppSessionStartWatch : PBCodable <NSCopying> {
    struct { unsigned char sessionStartMethodWatch : 1; } _has;
}

@property (nonatomic) BOOL hasSessionStartMethodWatch;
@property (nonatomic) int sessionStartMethodWatch;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
