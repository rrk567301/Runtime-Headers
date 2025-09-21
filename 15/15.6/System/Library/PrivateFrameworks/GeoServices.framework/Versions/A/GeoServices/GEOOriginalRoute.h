@class NSData, PBDataReader, PBUnknownFields;

@interface GEOOriginalRoute : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSData *_originalDirectionsResponseID;
    NSData *_routeHandle;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _originalRoutePurpose;
    unsigned int _routeIndex;
    struct { unsigned char has_originalRoutePurpose : 1; unsigned char has_routeIndex : 1; unsigned char read_unknownFields : 1; unsigned char read_originalDirectionsResponseID : 1; unsigned char read_routeHandle : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasOriginalRoutePurpose;
@property (nonatomic) int originalRoutePurpose;
@property (readonly, nonatomic) char hasRouteHandle;
@property (retain, nonatomic) NSData *routeHandle;
@property (readonly, nonatomic) char hasOriginalDirectionsResponseID;
@property (retain, nonatomic) NSData *originalDirectionsResponseID;
@property (nonatomic) char hasRouteIndex;
@property (nonatomic) unsigned int routeIndex;
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
- (int)StringAsOriginalRoutePurpose:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)originalRoutePurposeAsString:(int)a0;
- (void)readAll:(char)a0;

@end
