@interface PCPLocation : PBCodable <NSCopying> {
    struct { unsigned char locationHorizontalUncertaintyMeters : 1; unsigned char locationLatitudeDeg : 1; unsigned char locationLongitudeDeg : 1; unsigned char locationReferenceFrame : 1; } _has;
}

@property (nonatomic) BOOL hasLocationLatitudeDeg;
@property (nonatomic) double locationLatitudeDeg;
@property (nonatomic) BOOL hasLocationLongitudeDeg;
@property (nonatomic) double locationLongitudeDeg;
@property (nonatomic) BOOL hasLocationHorizontalUncertaintyMeters;
@property (nonatomic) double locationHorizontalUncertaintyMeters;
@property (nonatomic) BOOL hasLocationReferenceFrame;
@property (nonatomic) int locationReferenceFrame;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)StringAsLocationReferenceFrame:(id)a0;
- (id)locationReferenceFrameAsString:(int)a0;

@end
