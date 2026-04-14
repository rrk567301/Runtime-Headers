@interface PIRMapRegion : PBCodable <NSCopying> {
    struct { unsigned char eastLng : 1; unsigned char northLat : 1; unsigned char southLat : 1; unsigned char westLng : 1; } _has;
}

@property (nonatomic) BOOL hasSouthLat;
@property (nonatomic) float southLat;
@property (nonatomic) BOOL hasWestLng;
@property (nonatomic) float westLng;
@property (nonatomic) BOOL hasNorthLat;
@property (nonatomic) float northLat;
@property (nonatomic) BOOL hasEastLng;
@property (nonatomic) float eastLng;

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
