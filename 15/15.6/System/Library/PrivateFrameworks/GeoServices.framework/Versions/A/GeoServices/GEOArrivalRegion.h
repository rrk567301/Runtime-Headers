@class GEOMapRegion, PBUnknownFields;

@interface GEOArrivalRegion : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_arrivalRegion;
    int _arrivalRegionAction;
    unsigned int _endNavigationTimeoutThreshold;
    unsigned int _routeEndDistanceThresholdCm;
    struct { unsigned char has_arrivalRegionAction : 1; unsigned char has_endNavigationTimeoutThreshold : 1; unsigned char has_routeEndDistanceThresholdCm : 1; } _flags;
}

@property (readonly, nonatomic) char hasArrivalRegion;
@property (retain, nonatomic) GEOMapRegion *arrivalRegion;
@property (nonatomic) char hasArrivalRegionAction;
@property (nonatomic) int arrivalRegionAction;
@property (nonatomic) char hasEndNavigationTimeoutThreshold;
@property (nonatomic) unsigned int endNavigationTimeoutThreshold;
@property (nonatomic) char hasRouteEndDistanceThresholdCm;
@property (nonatomic) unsigned int routeEndDistanceThresholdCm;
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
- (int)StringAsArrivalRegionAction:(id)a0;
- (id)arrivalRegionActionAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
