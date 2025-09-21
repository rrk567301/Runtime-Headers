@class NSData, GEOTransitRouteUpdate, PBDataReader;

@interface GEOCompanionRouteUpdate : PBCodable <NSCopying> {
    PBDataReader *_reader;
    double _lastUpdated;
    NSData *_routeID;
    GEOTransitRouteUpdate *_transitRouteUpdate;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _type;
    struct { unsigned char has_lastUpdated : 1; unsigned char has_type : 1; unsigned char read_routeID : 1; unsigned char read_transitRouteUpdate : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasRouteID;
@property (retain, nonatomic) NSData *routeID;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasLastUpdated;
@property (nonatomic) double lastUpdated;
@property (readonly, nonatomic) char hasTransitRouteUpdate;
@property (retain, nonatomic) GEOTransitRouteUpdate *transitRouteUpdate;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithTransitRouteUpdate:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
