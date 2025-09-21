@class GEOLatLng, PBUnknownFields;

@interface GEOSharedNavLocationInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOLatLng *_coordinate;
    unsigned int _matchedCoordinateIndex;
    float _matchedCoordinateOffset;
    struct { unsigned char has_matchedCoordinateIndex : 1; unsigned char has_matchedCoordinateOffset : 1; } _flags;
}

@property (readonly, nonatomic) char hasCoordinate;
@property (retain, nonatomic) GEOLatLng *coordinate;
@property (nonatomic) char hasMatchedCoordinateIndex;
@property (nonatomic) unsigned int matchedCoordinateIndex;
@property (nonatomic) char hasMatchedCoordinateOffset;
@property (nonatomic) float matchedCoordinateOffset;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
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
