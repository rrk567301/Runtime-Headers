@interface GEORPSuggestedRouteIndex : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _clusteredRouteRideSelections;
    unsigned int _directionsResponseIndex;
    unsigned int _directionsResponseSuggestedRoutesIndex;
    struct { unsigned char has_directionsResponseIndex : 1; unsigned char has_directionsResponseSuggestedRoutesIndex : 1; } _flags;
}

@property (nonatomic) BOOL hasDirectionsResponseIndex;
@property (nonatomic) unsigned int directionsResponseIndex;
@property (nonatomic) BOOL hasDirectionsResponseSuggestedRoutesIndex;
@property (nonatomic) unsigned int directionsResponseSuggestedRoutesIndex;
@property (readonly, nonatomic) unsigned long long clusteredRouteRideSelectionsCount;
@property (readonly, nonatomic) unsigned int *clusteredRouteRideSelections;

+ (BOOL)isValid:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearClusteredRouteRideSelections;
- (void)addClusteredRouteRideSelections:(unsigned int)a0;
- (unsigned int)clusteredRouteRideSelectionsAtIndex:(unsigned long long)a0;
- (void)setClusteredRouteRideSelections:(unsigned int *)a0 count:(unsigned long long)a1;

@end
