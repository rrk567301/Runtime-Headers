@class PBUnknownFields, GEORouteIncident;

@interface GEOETARouteIncident : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEORouteIncident *_routeIncident;
    unsigned int _distanceFromStartCm;
    struct { unsigned char has_distanceFromStartCm : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasRouteIncident;
@property (retain, nonatomic) GEORouteIncident *routeIncident;
@property (nonatomic) BOOL hasDistanceFromStartCm;
@property (nonatomic) unsigned int distanceFromStartCm;
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

@end
