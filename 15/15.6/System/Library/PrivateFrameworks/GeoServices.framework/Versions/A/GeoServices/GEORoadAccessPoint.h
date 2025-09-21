@class GEOLatLng, PBUnknownFields;

@interface GEORoadAccessPoint : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOLatLng *_location;
    int _cyclingDirection;
    int _drivingDirection;
    int _parkingDirection;
    unsigned int _significance;
    int _source;
    int _transitDirection;
    int _walkingDirection;
    char _isApproximate;
    struct { unsigned char has_cyclingDirection : 1; unsigned char has_drivingDirection : 1; unsigned char has_parkingDirection : 1; unsigned char has_significance : 1; unsigned char has_source : 1; unsigned char has_transitDirection : 1; unsigned char has_walkingDirection : 1; unsigned char has_isApproximate : 1; } _flags;
}

@property (readonly, nonatomic) char hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) char hasIsApproximate;
@property (nonatomic) char isApproximate;
@property (nonatomic) char hasCyclingDirection;
@property (nonatomic) int cyclingDirection;
@property (nonatomic) char hasDrivingDirection;
@property (nonatomic) int drivingDirection;
@property (nonatomic) char hasTransitDirection;
@property (nonatomic) int transitDirection;
@property (nonatomic) char hasWalkingDirection;
@property (nonatomic) int walkingDirection;
@property (nonatomic) char hasParkingDirection;
@property (nonatomic) int parkingDirection;
@property (nonatomic) char hasSignificance;
@property (nonatomic) unsigned int significance;
@property (nonatomic) char hasSource;
@property (nonatomic) int source;
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
- (id)sourceAsString:(int)a0;
- (int)StringAsSource:(id)a0;
- (int)StringAsCyclingDirection:(id)a0;
- (int)StringAsDrivingDirection:(id)a0;
- (int)StringAsWalkingDirection:(id)a0;
- (int)StringAsParkingDirection:(id)a0;
- (int)StringAsTransitDirection:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)cyclingDirectionAsString:(int)a0;
- (id)drivingDirectionAsString:(int)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)parkingDirectionAsString:(int)a0;
- (void)readAll:(char)a0;
- (id)transitDirectionAsString:(int)a0;
- (id)walkingDirectionAsString:(int)a0;

@end
