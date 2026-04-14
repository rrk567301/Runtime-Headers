@class PBDataReader, GEORPUserSearchInput, NSMutableArray, PBUnknownFields;

@interface GEORPDirectionsFeedbackContext : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    NSMutableArray *_directionsWaypointPlaceInfos;
    GEORPUserSearchInput *_endWaypoint;
    NSMutableArray *_rerouteLocations;
    NSMutableArray *_routes;
    GEORPUserSearchInput *_startWaypoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_directionsRequests : 1; unsigned char read_directionsResponses : 1; unsigned char read_directionsWaypointPlaceInfos : 1; unsigned char read_endWaypoint : 1; unsigned char read_rerouteLocations : 1; unsigned char read_routes : 1; unsigned char read_startWaypoint : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *directionsRequests;
@property (retain, nonatomic) NSMutableArray *directionsResponses;
@property (retain, nonatomic) NSMutableArray *directionsWaypointPlaceInfos;
@property (readonly, nonatomic) BOOL hasStartWaypoint;
@property (retain, nonatomic) GEORPUserSearchInput *startWaypoint;
@property (readonly, nonatomic) BOOL hasEndWaypoint;
@property (retain, nonatomic) GEORPUserSearchInput *endWaypoint;
@property (retain, nonatomic) NSMutableArray *routes;
@property (retain, nonatomic) NSMutableArray *rerouteLocations;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)routeType;
+ (BOOL)isValid:(id)a0;
+ (Class)directionsRequestType;
+ (Class)directionsResponseType;
+ (Class)directionsWaypointPlaceInfoType;
+ (Class)rerouteLocationType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)clearDirectionsRequests;
- (void)addDirectionsRequest:(id)a0;
- (unsigned long long)directionsRequestsCount;
- (id)directionsRequestAtIndex:(unsigned long long)a0;
- (void)clearDirectionsResponses;
- (void)addDirectionsResponse:(id)a0;
- (unsigned long long)directionsResponsesCount;
- (id)directionsResponseAtIndex:(unsigned long long)a0;
- (void)clearDirectionsWaypointPlaceInfos;
- (void)addDirectionsWaypointPlaceInfo:(id)a0;
- (unsigned long long)directionsWaypointPlaceInfosCount;
- (id)directionsWaypointPlaceInfoAtIndex:(unsigned long long)a0;
- (void)clearRoutes;
- (void)addRoute:(id)a0;
- (unsigned long long)routesCount;
- (id)routeAtIndex:(unsigned long long)a0;
- (void)clearRerouteLocations;
- (void)addRerouteLocation:(id)a0;
- (unsigned long long)rerouteLocationsCount;
- (id)rerouteLocationAtIndex:(unsigned long long)a0;

@end
