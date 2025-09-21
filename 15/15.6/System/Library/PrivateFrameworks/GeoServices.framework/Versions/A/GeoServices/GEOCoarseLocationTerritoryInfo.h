@class NSString, GEOCoarseLocationPolygon, PBDataReader;

@interface GEOCoarseLocationTerritoryInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _coordinates;
    struct GEOCoarseLocationLatLng { double _lat; double _lng; } _representativePoint;
    double _areaDegrees;
    double _areaRatio;
    NSString *_countryNameStr;
    unsigned long long _featureId;
    double _maxDistanceMeters;
    GEOCoarseLocationPolygon *_polygon;
    NSString *_regionNameStr;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _countryName;
    unsigned int _regionName;
    int _representativePointQuality;
    unsigned int _revgeoRank;
    int _territoryType;
    char _precise;
    char _shouldRandomize;
    struct { unsigned char has_representativePoint : 1; unsigned char has_areaDegrees : 1; unsigned char has_areaRatio : 1; unsigned char has_featureId : 1; unsigned char has_maxDistanceMeters : 1; unsigned char has_countryName : 1; unsigned char has_regionName : 1; unsigned char has_representativePointQuality : 1; unsigned char has_revgeoRank : 1; unsigned char has_territoryType : 1; unsigned char has_precise : 1; unsigned char has_shouldRandomize : 1; unsigned char read_coordinates : 1; unsigned char read_countryNameStr : 1; unsigned char read_polygon : 1; unsigned char read_regionNameStr : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasTerritoryType;
@property (nonatomic) int territoryType;
@property (nonatomic) char hasRegionName;
@property (nonatomic) unsigned int regionName;
@property (nonatomic) char hasCountryName;
@property (nonatomic) unsigned int countryName;
@property (readonly, nonatomic) unsigned long long coordinatesCount;
@property (readonly, nonatomic) unsigned int *coordinates;
@property (nonatomic) char hasPrecise;
@property (nonatomic) char precise;
@property (nonatomic) char hasFeatureId;
@property (nonatomic) unsigned long long featureId;
@property (nonatomic) char hasRepresentativePoint;
@property (nonatomic) struct GEOCoarseLocationLatLng { double x0; double x1; } representativePoint;
@property (nonatomic) char hasAreaDegrees;
@property (nonatomic) double areaDegrees;
@property (nonatomic) char hasRevgeoRank;
@property (nonatomic) unsigned int revgeoRank;
@property (nonatomic) char hasAreaRatio;
@property (nonatomic) double areaRatio;
@property (nonatomic) char hasMaxDistanceMeters;
@property (nonatomic) double maxDistanceMeters;
@property (readonly, nonatomic) char hasRegionNameStr;
@property (retain, nonatomic) NSString *regionNameStr;
@property (readonly, nonatomic) char hasCountryNameStr;
@property (retain, nonatomic) NSString *countryNameStr;
@property (readonly, nonatomic) char hasPolygon;
@property (retain, nonatomic) GEOCoarseLocationPolygon *polygon;
@property (nonatomic) char hasRepresentativePointQuality;
@property (nonatomic) int representativePointQuality;
@property (nonatomic) char hasShouldRandomize;
@property (nonatomic) char shouldRandomize;

+ (char)isValid:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsRepresentativePointQuality:(id)a0;
- (void)addCoordinates:(unsigned int)a0;
- (int)StringAsTerritoryType:(id)a0;
- (void)clearCoordinates;
- (unsigned int)coordinatesAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)representativePointQualityAsString:(int)a0;
- (void)setCoordinates:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)territoryTypeAsString:(int)a0;

@end
