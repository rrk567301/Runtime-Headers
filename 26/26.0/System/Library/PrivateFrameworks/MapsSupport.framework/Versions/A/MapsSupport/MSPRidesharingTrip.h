@class PBUnknownFields, GEOComposedWaypoint;

@interface MSPRidesharingTrip : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
}

@property (readonly, nonatomic) BOOL hasStartWaypoint;
@property (retain, nonatomic) GEOComposedWaypoint *startWaypoint;
@property (readonly, nonatomic) BOOL hasEndWaypoint;
@property (retain, nonatomic) GEOComposedWaypoint *endWaypoint;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
