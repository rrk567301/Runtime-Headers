@class GEOLatLng, GEOMapRegion, PBUnknownFields;

@interface MSPDroppedPin : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char timestamp : 1; unsigned char floorOrdinal : 1; } _has;
}

@property (readonly, nonatomic) char hasLatLng;
@property (retain, nonatomic) GEOLatLng *latLng;
@property (readonly, nonatomic) char hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasFloorOrdinal;
@property (nonatomic) int floorOrdinal;
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
