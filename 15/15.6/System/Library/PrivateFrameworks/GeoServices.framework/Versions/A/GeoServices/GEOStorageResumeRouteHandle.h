@class GEOOriginalWaypointRoute, PBDataReader, NSData, PBUnknownFields;

@interface GEOStorageResumeRouteHandle : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOOriginalWaypointRoute *_routeGeometry;
    NSData *_serverSessionState;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    char _hasVisitedFirstStop;
    struct { unsigned char has_hasVisitedFirstStop : 1; unsigned char read_unknownFields : 1; unsigned char read_routeGeometry : 1; unsigned char read_serverSessionState : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasRouteGeometry;
@property (retain, nonatomic) GEOOriginalWaypointRoute *routeGeometry;
@property (readonly, nonatomic) char hasServerSessionState;
@property (retain, nonatomic) NSData *serverSessionState;
@property (nonatomic) char hasHasVisitedFirstStop;
@property (nonatomic) char hasVisitedFirstStop;
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
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
