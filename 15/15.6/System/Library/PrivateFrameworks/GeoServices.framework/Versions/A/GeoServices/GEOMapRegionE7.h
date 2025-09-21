@class GEOMapRegion, NSMutableArray, PBUnknownFields;

@interface GEOMapRegionE7 : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_vertexE7s;
    int _eastLngE7;
    int _northLatE7;
    int _southLatE7;
    int _westLngE7;
    struct { unsigned char has_eastLngE7 : 1; unsigned char has_northLatE7 : 1; unsigned char has_southLatE7 : 1; unsigned char has_westLngE7 : 1; } _flags;
}

@property (readonly, nonatomic) int centerLatE7;
@property (readonly, nonatomic) int centerLngE7;
@property (readonly, nonatomic) int spanLatE7;
@property (readonly, nonatomic) int spanLngE7;
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, nonatomic) char hasRectangleVertices;
@property (nonatomic) char hasSouthLatE7;
@property (nonatomic) int southLatE7;
@property (nonatomic) char hasWestLngE7;
@property (nonatomic) int westLngE7;
@property (nonatomic) char hasNorthLatE7;
@property (nonatomic) int northLatE7;
@property (nonatomic) char hasEastLngE7;
@property (nonatomic) int eastLngE7;
@property (retain, nonatomic) NSMutableArray *vertexE7s;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)_geo_mapRegionForGEOCoordinateRegion:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
+ (char)isValid:(id)a0;
+ (Class)vertexE7Type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)isValid;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithLatitude:(double)a0 longitude:(double)a1;
- (void)addVertexE7:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (void)clearVertexE7s;
- (id)coordinatesE7;
- (id)initWithCoordinateRegion:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithJSON:(id)a0;
- (id)initWithMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithMapRegion:(id)a0;
- (id)initWithRadialPlace:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (void)setMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)vertexE7AtIndex:(unsigned long long)a0;
- (unsigned long long)vertexE7sCount;

@end
