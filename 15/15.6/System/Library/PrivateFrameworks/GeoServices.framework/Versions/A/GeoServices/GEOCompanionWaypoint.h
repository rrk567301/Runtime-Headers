@class GEOMapItemStorage, NSString, GEOWaypointTyped, GEOLocation, NSData, PBDataReader;

@interface GEOCompanionWaypoint : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_findMyHandleID;
    GEOMapItemStorage *_mapItem;
    NSData *_routeData;
    NSString *_searchString;
    GEOWaypointTyped *_waypointTyped;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    char _isCurrentLocation;
    struct { unsigned char has_isCurrentLocation : 1; unsigned char read_findMyHandleID : 1; unsigned char read_mapItem : 1; unsigned char read_routeData : 1; unsigned char read_searchString : 1; unsigned char read_waypointTyped : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) GEOLocation *location;
@property (readonly, nonatomic) char hasMapItem;
@property (retain, nonatomic) GEOMapItemStorage *mapItem;
@property (readonly, nonatomic) char hasWaypointTyped;
@property (retain, nonatomic) GEOWaypointTyped *waypointTyped;
@property (nonatomic) char hasIsCurrentLocation;
@property (nonatomic) char isCurrentLocation;
@property (readonly, nonatomic) char hasSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (readonly, nonatomic) char hasFindMyHandleID;
@property (retain, nonatomic) NSString *findMyHandleID;
@property (readonly, nonatomic) char hasRouteData;
@property (retain, nonatomic) NSData *routeData;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithComposedWaypoint:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
