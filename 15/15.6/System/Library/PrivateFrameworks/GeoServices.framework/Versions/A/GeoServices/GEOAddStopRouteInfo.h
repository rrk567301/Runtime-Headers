@class PBDataReader, NSData, GEORouteAttributes, PBUnknownFields;

@interface GEOAddStopRouteInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSData *_originalWaypointRouteRepresentation;
    GEORouteAttributes *_routeAttributes;
    NSData *_routeId;
    NSData *_sessionState;
    NSData *_zilchData;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_originalWaypointRouteRepresentation : 1; unsigned char read_routeAttributes : 1; unsigned char read_routeId : 1; unsigned char read_sessionState : 1; unsigned char read_zilchData : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasOriginalWaypointRouteRepresentation;
@property (retain, nonatomic) NSData *originalWaypointRouteRepresentation;
@property (readonly, nonatomic) char hasZilchData;
@property (retain, nonatomic) NSData *zilchData;
@property (readonly, nonatomic) char hasSessionState;
@property (retain, nonatomic) NSData *sessionState;
@property (readonly, nonatomic) char hasRouteId;
@property (retain, nonatomic) NSData *routeId;
@property (readonly, nonatomic) char hasRouteAttributes;
@property (retain, nonatomic) GEORouteAttributes *routeAttributes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
