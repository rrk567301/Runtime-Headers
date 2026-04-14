@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOFamiliarWaypointRoute : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_familarRouteUuid;
    NSMutableArray *_routeLegs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_familarRouteUuid : 1; unsigned char read_routeLegs : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasFamilarRouteUuid;
@property (retain, nonatomic) NSString *familarRouteUuid;
@property (retain, nonatomic) NSMutableArray *routeLegs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)routeLegType;

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithData:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)init;
- (void)mergeFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)addRouteLeg:(id)a0;
- (void)clearRouteLegs;
- (id)routeLegAtIndex:(unsigned long long)a0;
- (unsigned long long)routeLegsCount;

@end
