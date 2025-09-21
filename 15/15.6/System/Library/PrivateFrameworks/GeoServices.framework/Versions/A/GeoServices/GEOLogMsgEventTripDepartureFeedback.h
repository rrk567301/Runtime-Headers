@class PBUnknownFields;

@interface GEOLogMsgEventTripDepartureFeedback : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _distanceFromOrigin;
    double _timeFromOrigin;
    int _transportMode;
    struct { unsigned char has_distanceFromOrigin : 1; unsigned char has_timeFromOrigin : 1; unsigned char has_transportMode : 1; } _flags;
}

@property (nonatomic) char hasTransportMode;
@property (nonatomic) int transportMode;
@property (nonatomic) char hasDistanceFromOrigin;
@property (nonatomic) double distanceFromOrigin;
@property (nonatomic) char hasTimeFromOrigin;
@property (nonatomic) double timeFromOrigin;
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
- (int)StringAsTransportMode:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)transportModeAsString:(int)a0;

@end
