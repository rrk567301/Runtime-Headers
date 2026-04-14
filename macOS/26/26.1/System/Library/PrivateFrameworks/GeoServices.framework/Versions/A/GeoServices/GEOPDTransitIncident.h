@class NSMutableArray, PBUnknownFields;

@interface GEOPDTransitIncident : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_transitIncidents;
}

+ (id)transitIncidentsForPlaceData:(id)a0 hasTransitIncidentComponent:(BOOL *)a1;
+ (id)transitIncidentsTTLExpirationDateForPlaceData:(id)a0;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)jsonRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
