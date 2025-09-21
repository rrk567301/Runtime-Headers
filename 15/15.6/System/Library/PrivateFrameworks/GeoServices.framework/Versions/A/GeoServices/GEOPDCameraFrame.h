@interface GEOPDCameraFrame : PBCodable <NSCopying> {
    double _altitude;
    double _latitude;
    double _longitude;
    double _pitch;
    double _roll;
    double _yaw;
    struct { unsigned char has_altitude : 1; unsigned char has_latitude : 1; unsigned char has_longitude : 1; unsigned char has_pitch : 1; unsigned char has_roll : 1; unsigned char has_yaw : 1; } _flags;
}

@property (nonatomic) char hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) char hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) char hasAltitude;
@property (nonatomic) double altitude;
@property (nonatomic) char hasYaw;
@property (nonatomic) double yaw;
@property (nonatomic) char hasPitch;
@property (nonatomic) double pitch;
@property (nonatomic) char hasRoll;
@property (nonatomic) double roll;

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
