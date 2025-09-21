@interface GEOURLCenterSpan : PBCodable <NSCopying> {
    double _latitudeDelta;
    double _latitude;
    double _longitudeDelta;
    double _longitude;
    struct { unsigned char has_latitudeDelta : 1; unsigned char has_latitude : 1; unsigned char has_longitudeDelta : 1; unsigned char has_longitude : 1; } _flags;
}

@property (nonatomic) char hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) char hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) char hasLatitudeDelta;
@property (nonatomic) double latitudeDelta;
@property (nonatomic) char hasLongitudeDelta;
@property (nonatomic) double longitudeDelta;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
