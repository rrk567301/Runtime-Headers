@class GEOMapRegion;

@interface GEOLPRBoundingBoxE7 : PBCodable <NSCopying> {
    int _eastLngE7;
    int _northLatE7;
    int _southLatE7;
    int _westLngE7;
    struct { unsigned char has_eastLngE7 : 1; unsigned char has_northLatE7 : 1; unsigned char has_southLatE7 : 1; unsigned char has_westLngE7 : 1; } _flags;
}

@property (readonly, nonatomic) int centerLatE7;
@property (readonly, nonatomic) int centerLngE7;
@property (readonly, nonatomic) struct { double x0; double x1; } center;
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) char hasSouthLatE7;
@property (nonatomic) int southLatE7;
@property (nonatomic) char hasWestLngE7;
@property (nonatomic) int westLngE7;
@property (nonatomic) char hasNorthLatE7;
@property (nonatomic) int northLatE7;
@property (nonatomic) char hasEastLngE7;
@property (nonatomic) int eastLngE7;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)isValid;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
