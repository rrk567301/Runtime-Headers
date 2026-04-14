@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOMapRegion : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _eastLng;
    double _northLat;
    NSString *_providingVendor;
    double _southLat;
    NSMutableArray *_vertexs;
    double _westLng;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _mapRegionSourceType;
    BOOL _isManuallyEntered;
    struct { unsigned char has_eastLng : 1; unsigned char has_northLat : 1; unsigned char has_southLat : 1; unsigned char has_westLng : 1; unsigned char has_mapRegionSourceType : 1; unsigned char has_isManuallyEntered : 1; unsigned char read_unknownFields : 1; unsigned char read_providingVendor : 1; unsigned char read_vertexs : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) double centerLat;
@property (readonly, nonatomic) double centerLng;
@property (readonly, nonatomic) double spanLat;
@property (readonly, nonatomic) double spanLng;
@property (readonly, nonatomic) BOOL hasRectangleVertices;
@property (nonatomic) BOOL hasSouthLat;
@property (nonatomic) double southLat;
@property (nonatomic) BOOL hasWestLng;
@property (nonatomic) double westLng;
@property (nonatomic) BOOL hasNorthLat;
@property (nonatomic) double northLat;
@property (nonatomic) BOOL hasEastLng;
@property (nonatomic) double eastLng;
@property (retain, nonatomic) NSMutableArray *vertexs;
@property (nonatomic) BOOL hasMapRegionSourceType;
@property (nonatomic) int mapRegionSourceType;
@property (nonatomic) BOOL hasIsManuallyEntered;
@property (nonatomic) BOOL isManuallyEntered;
@property (readonly, nonatomic) BOOL hasProvidingVendor;
@property (retain, nonatomic) NSString *providingVendor;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (id)_geo_mapRegionForGEOCoordinateRegion:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
+ (Class)vertexType;

- (id)initWithLatitude:(double)a0 longitude:(double)a1;
- (id)initWithData:(id)a0;
- (BOOL)isValid;
- (id)initWithDictionary:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)vertexAtIndex:(unsigned long long)a0;
- (id)init;
- (void)mergeFrom:(id)a0;
- (BOOL)containsCoordinate:(struct { double x0; double x1; })a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addVertex:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)coordinates;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)containsRegion:(id)a0;
- (BOOL)intersectsRegion:(id)a0;
- (id)initWithCenter:(struct { double x0; double x1; })a0 radius:(double)a1;
- (int)StringAsMapRegionSourceType:(id)a0;
- (void)clearVertexs;
- (BOOL)containsCoordinate:(struct { double x0; double x1; })a0 radius:(double)a1;
- (BOOL)containsMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithCoordinateRegion:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithRadialPlace:(id)a0;
- (id)intersectionsOnPolyline:(id)a0;
- (BOOL)intersectsMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)mapRegionSourceTypeAsString:(int)a0;
- (void)setMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (unsigned long long)vertexsCount;

@end
