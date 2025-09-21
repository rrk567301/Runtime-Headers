@interface HDCodableRoutePointDatum : PBCodable <NSCopying> {
    struct { unsigned char altitude : 1; unsigned char latitude : 1; unsigned char longitude : 1; unsigned char odometer : 1; unsigned char timestamp : 1; unsigned char signalEnvironmentType : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) char hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) char hasAltitude;
@property (nonatomic) double altitude;
@property (nonatomic) char hasOdometer;
@property (nonatomic) double odometer;
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
