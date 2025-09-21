@class GEOStorageRouteRequestStorage, PBUnknownFields;

@interface MSPDirectionsSearch : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char navigationInterrupted : 1; } _has;
}

@property (readonly, nonatomic) char hasRouteRequestStorage;
@property (retain, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic) char hasNavigationInterrupted;
@property (nonatomic) char navigationInterrupted;
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
