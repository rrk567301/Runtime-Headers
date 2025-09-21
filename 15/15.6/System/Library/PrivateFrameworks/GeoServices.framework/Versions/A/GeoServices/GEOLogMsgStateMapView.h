@class GEOMapRegion, PBUnknownFields;

@interface GEOLogMsgStateMapView : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_mapRegion;
    double _pitch;
    double _styleZoomLevel;
    double _zoomLevel;
    int _mapType;
    int _viewMode;
    char _isAdvancedMap;
    char _isGlobeProjection;
    char _watchProximityRadiusOn;
    struct { unsigned char has_pitch : 1; unsigned char has_styleZoomLevel : 1; unsigned char has_zoomLevel : 1; unsigned char has_mapType : 1; unsigned char has_viewMode : 1; unsigned char has_isAdvancedMap : 1; unsigned char has_isGlobeProjection : 1; unsigned char has_watchProximityRadiusOn : 1; } _flags;
}

@property (readonly, nonatomic) char hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) char hasZoomLevel;
@property (nonatomic) double zoomLevel;
@property (nonatomic) char hasMapType;
@property (nonatomic) int mapType;
@property (nonatomic) char hasStyleZoomLevel;
@property (nonatomic) double styleZoomLevel;
@property (nonatomic) char hasPitch;
@property (nonatomic) double pitch;
@property (nonatomic) char hasIsAdvancedMap;
@property (nonatomic) char isAdvancedMap;
@property (nonatomic) char hasIsGlobeProjection;
@property (nonatomic) char isGlobeProjection;
@property (nonatomic) char hasViewMode;
@property (nonatomic) int viewMode;
@property (nonatomic) char hasWatchProximityRadiusOn;
@property (nonatomic) char watchProximityRadiusOn;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsViewMode:(id)a0;
- (int)StringAsMapType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)mapTypeAsString:(int)a0;
- (void)readAll:(char)a0;
- (id)viewModeAsString:(int)a0;

@end
