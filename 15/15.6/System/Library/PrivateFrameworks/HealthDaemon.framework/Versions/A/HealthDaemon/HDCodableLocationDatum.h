@interface HDCodableLocationDatum : PBCodable <NSCopying> {
    struct { unsigned char altitude : 1; unsigned char course : 1; unsigned char courseAccuracy : 1; unsigned char horizontalAccuracy : 1; unsigned char latitude : 1; unsigned char longitude : 1; unsigned char speed : 1; unsigned char speedAccuracy : 1; unsigned char timestamp : 1; unsigned char verticalAccuracy : 1; unsigned char signalEnvironmentType : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) char hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) char hasAltitude;
@property (nonatomic) double altitude;
@property (nonatomic) char hasSpeed;
@property (nonatomic) double speed;
@property (nonatomic) char hasCourse;
@property (nonatomic) double course;
@property (nonatomic) char hasHorizontalAccuracy;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) char hasVerticalAccuracy;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) char hasSpeedAccuracy;
@property (nonatomic) double speedAccuracy;
@property (nonatomic) char hasCourseAccuracy;
@property (nonatomic) double courseAccuracy;
@property (nonatomic) char hasSignalEnvironmentType;
@property (nonatomic) int signalEnvironmentType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
