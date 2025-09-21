@interface GEORPSuggestedRouteIndex : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _clusteredRouteRideSelections;
    unsigned int _directionsResponseIndex;
    unsigned int _directionsResponseSuggestedRoutesIndex;
    struct { unsigned char has_directionsResponseIndex : 1; unsigned char has_directionsResponseSuggestedRoutesIndex : 1; } _flags;
}

@property (nonatomic) char hasDirectionsResponseIndex;
@property (nonatomic) unsigned int directionsResponseIndex;
@property (nonatomic) char hasDirectionsResponseSuggestedRoutesIndex;
@property (nonatomic) unsigned int directionsResponseSuggestedRoutesIndex;
@property (readonly, nonatomic) unsigned long long clusteredRouteRideSelectionsCount;
@property (readonly, nonatomic) unsigned int *clusteredRouteRideSelections;

+ (char)isValid:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addClusteredRouteRideSelections:(unsigned int)a0;
- (void)clearClusteredRouteRideSelections;
- (unsigned int)clusteredRouteRideSelectionsAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (void)setClusteredRouteRideSelections:(unsigned int *)a0 count:(unsigned long long)a1;

@end
