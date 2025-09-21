@class GEOMapItemStorage, NSString, GEOLatLng, PBUnknownFields;

@interface MSPPlaceBookmark : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char droppedPinFloorOrdinal : 1; unsigned char origin : 1; } _has;
}

@property (readonly, nonatomic) char hasMapItemStorage;
@property (retain, nonatomic) GEOMapItemStorage *mapItemStorage;
@property (nonatomic) char hasOrigin;
@property (nonatomic) int origin;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasDroppedPinCoordinate;
@property (retain, nonatomic) GEOLatLng *droppedPinCoordinate;
@property (nonatomic) char hasDroppedPinFloorOrdinal;
@property (nonatomic) int droppedPinFloorOrdinal;
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
- (int)StringAsOrigin:(id)a0;
- (id)originAsString:(int)a0;

@end
