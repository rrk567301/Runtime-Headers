@class NSMutableArray, PBUnknownFields;

@interface GEOMapRegion : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _eastLng;
    double _northLat;
    double _southLat;
    NSMutableArray *_vertexs;
    double _westLng;
    int _mapRegionSourceType;
    struct { unsigned char has_eastLng : 1; unsigned char has_northLat : 1; unsigned char has_southLat : 1; unsigned char has_westLng : 1; unsigned char has_mapRegionSourceType : 1; } _flags;
}

@property (readonly, nonatomic) double centerLat;
@property (readonly, nonatomic) double centerLng;
@property (readonly, nonatomic) double spanLat;
@property (readonly, nonatomic) double spanLng;
@property (readonly, nonatomic) char hasRectangleVertices;
@property (nonatomic) char hasSouthLat;
@property (nonatomic) double southLat;
@property (nonatomic) char hasWestLng;
@property (nonatomic) double westLng;
@property (nonatomic) char hasNorthLat;
@property (nonatomic) double northLat;
@property (nonatomic) char hasEastLng;
@property (nonatomic) double eastLng;
@property (retain, nonatomic) NSMutableArray *vertexs;
@property (nonatomic) char hasMapRegionSourceType;
@property (nonatomic) int mapRegionSourceType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)_geo_mapRegionForGEOCoordinateRegion:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
+ (char)isValid:(id)a0;
+ (Class)vertexType;

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
- (char)containsRegion:(id)a0;
- (char)intersectsRegion:(id)a0;
- (id)vertexAtIndex:(unsigned long long)a0;
- (void)addVertex:(id)a0;
- (char)containsCoordinate:(struct { double x0; double x1; })a0;
- (id)coordinates;
- (id)initWithLatitude:(double)a0 longitude:(double)a1;
- (int)StringAsMapRegionSourceType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (void)clearVertexs;
- (char)containsCoordinate:(struct { double x0; double x1; })a0 radius:(double)a1;
- (char)containsMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithCoordinateRegion:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithJSON:(id)a0;
- (id)initWithMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithRadialPlace:(id)a0;
- (id)intersectionsOnPolyline:(id)a0;
- (char)intersectsMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)jsonRepresentation;
- (id)mapRegionSourceTypeAsString:(int)a0;
- (void)readAll:(char)a0;
- (void)setMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (unsigned long long)vertexsCount;

@end
