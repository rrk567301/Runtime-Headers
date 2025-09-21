@class PBUnknownFields, GEOComposedWaypoint;

@interface MSPRidesharingTrip : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
}

@property (readonly, nonatomic) char hasStartWaypoint;
@property (retain, nonatomic) GEOComposedWaypoint *startWaypoint;
@property (readonly, nonatomic) char hasEndWaypoint;
@property (retain, nonatomic) GEOComposedWaypoint *endWaypoint;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
