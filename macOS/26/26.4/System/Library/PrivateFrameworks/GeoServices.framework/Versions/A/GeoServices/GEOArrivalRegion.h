@class GEOMapRegion, PBUnknownFields;

@interface GEOArrivalRegion : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_arrivalRegion;
    int _arrivalRegionAction;
    unsigned int _endNavigationTimeoutThreshold;
    unsigned int _routeEndDistanceThresholdCm;
    struct { unsigned char has_arrivalRegionAction : 1; unsigned char has_endNavigationTimeoutThreshold : 1; unsigned char has_routeEndDistanceThresholdCm : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasArrivalRegion;
@property (retain, nonatomic) GEOMapRegion *arrivalRegion;
@property (nonatomic) BOOL hasArrivalRegionAction;
@property (nonatomic) int arrivalRegionAction;
@property (nonatomic) BOOL hasEndNavigationTimeoutThreshold;
@property (nonatomic) unsigned int endNavigationTimeoutThreshold;
@property (nonatomic) BOOL hasRouteEndDistanceThresholdCm;
@property (nonatomic) unsigned int routeEndDistanceThresholdCm;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (int)StringAsArrivalRegionAction:(id)a0;
- (id)arrivalRegionActionAsString:(int)a0;

@end
