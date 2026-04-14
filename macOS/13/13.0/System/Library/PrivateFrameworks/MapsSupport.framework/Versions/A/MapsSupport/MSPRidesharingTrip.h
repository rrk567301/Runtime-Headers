@class PBUnknownFields, GEOComposedWaypoint;

@interface MSPRidesharingTrip : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
}

@property (readonly, nonatomic) BOOL hasStartWaypoint;
@property (retain, nonatomic) GEOComposedWaypoint *startWaypoint;
@property (readonly, nonatomic) BOOL hasEndWaypoint;
@property (retain, nonatomic) GEOComposedWaypoint *endWaypoint;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
