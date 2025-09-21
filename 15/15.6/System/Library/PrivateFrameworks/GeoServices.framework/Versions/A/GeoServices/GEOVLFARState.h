@class PBUnknownFields;

@interface GEOVLFARState : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _geoTrackingStateReason;
    int _geoTrackingState;
    unsigned int _relativeTimestampMs;
    struct { unsigned char has_geoTrackingStateReason : 1; unsigned char has_geoTrackingState : 1; unsigned char has_relativeTimestampMs : 1; } _flags;
}

@property (nonatomic) char hasRelativeTimestampMs;
@property (nonatomic) unsigned int relativeTimestampMs;
@property (nonatomic) char hasGeoTrackingState;
@property (nonatomic) int geoTrackingState;
@property (nonatomic) char hasGeoTrackingStateReason;
@property (nonatomic) int geoTrackingStateReason;
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
- (int)StringAsGeoTrackingStateReason:(id)a0;
- (int)StringAsGeoTrackingState:(id)a0;
- (id)geoTrackingStateReasonAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (id)geoTrackingStateAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
