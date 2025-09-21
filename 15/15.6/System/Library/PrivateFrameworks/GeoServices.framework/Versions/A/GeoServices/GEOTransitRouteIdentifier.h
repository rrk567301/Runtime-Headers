@class PBDataReader, NSUUID, NSData, PBUnknownFields;

@interface GEOTransitRouteIdentifier : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSData *_clientRouteHandle;
    NSData *_serverRouteHandle;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_clientRouteHandle : 1; unsigned char read_serverRouteHandle : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) NSUUID *clientRouteID;
@property (readonly, nonatomic) char hasServerRouteHandle;
@property (retain, nonatomic) NSData *serverRouteHandle;
@property (readonly, nonatomic) char hasClientRouteHandle;
@property (retain, nonatomic) NSData *clientRouteHandle;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)routeIdentiferForComposedRoute:(id)a0;
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
