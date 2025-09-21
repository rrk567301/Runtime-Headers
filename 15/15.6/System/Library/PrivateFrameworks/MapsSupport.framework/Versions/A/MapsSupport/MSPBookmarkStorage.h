@class MSPRegionBookmark, NSString, MSPRouteBookmark, MSPPlaceBookmark, MSPTransitLineBookmark, PBUnknownFields;

@interface MSPBookmarkStorage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char position : 1; unsigned char timestamp : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char hasPosition;
@property (nonatomic) double position;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) char hasPlaceBookmark;
@property (retain, nonatomic) MSPPlaceBookmark *placeBookmark;
@property (readonly, nonatomic) char hasRouteBookmark;
@property (retain, nonatomic) MSPRouteBookmark *routeBookmark;
@property (readonly, nonatomic) char hasRegionBookmark;
@property (retain, nonatomic) MSPRegionBookmark *regionBookmark;
@property (readonly, nonatomic) char hasTransitLineBookmark;
@property (retain, nonatomic) MSPTransitLineBookmark *transitLineBookmark;
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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;

@end
