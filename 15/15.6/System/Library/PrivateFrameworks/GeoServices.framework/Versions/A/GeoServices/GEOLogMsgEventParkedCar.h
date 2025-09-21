@class GEOLatLng, PBUnknownFields;

@interface GEOLogMsgEventParkedCar : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _locationUncertainty;
    GEOLatLng *_location;
    double _timestamp;
    struct { unsigned char has_locationUncertainty : 1; unsigned char has_timestamp : 1; } _flags;
}

@property (readonly, nonatomic) char hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) char hasLocationUncertainty;
@property (nonatomic) double locationUncertainty;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
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
