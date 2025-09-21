@class NSData, PBDataReader;

@interface GEOURLRouteHandle : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSData *_directionsResponseID;
    NSData *_routeID;
    NSData *_transitData;
    NSData *_zilchPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_directionsResponseID : 1; unsigned char read_routeID : 1; unsigned char read_transitData : 1; unsigned char read_zilchPoints : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasDirectionsResponseID;
@property (retain, nonatomic) NSData *directionsResponseID;
@property (readonly, nonatomic) char hasRouteID;
@property (retain, nonatomic) NSData *routeID;
@property (readonly, nonatomic) char hasZilchPoints;
@property (retain, nonatomic) NSData *zilchPoints;
@property (readonly, nonatomic) char hasTransitData;
@property (retain, nonatomic) NSData *transitData;

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
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
