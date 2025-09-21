@class GEOLatLng, PBUnknownFields;

@interface GEOPBTransitTriggerRegion : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOLatLng *_location;
    unsigned int _delaySeconds;
    int _signalStrength;
    int _transition;
    struct { unsigned char has_delaySeconds : 1; unsigned char has_signalStrength : 1; unsigned char has_transition : 1; } _flags;
}

@property (readonly, nonatomic) char hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) char hasTransition;
@property (nonatomic) int transition;
@property (nonatomic) char hasSignalStrength;
@property (nonatomic) int signalStrength;
@property (nonatomic) char hasDelaySeconds;
@property (nonatomic) unsigned int delaySeconds;
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
- (int)StringAsTransition:(id)a0;
- (int)StringAsSignalStrength:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)signalStrengthAsString:(int)a0;
- (id)transitionAsString:(int)a0;

@end
