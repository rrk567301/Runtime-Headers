@class CLPQuaternion;

@interface CLPIndoorCMAttitude : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char magneticAccuracy : 1; unsigned char magneticCalibration : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) char hasQuaternion;
@property (retain, nonatomic) CLPQuaternion *quaternion;
@property (nonatomic) char hasMagneticAccuracy;
@property (nonatomic) float magneticAccuracy;
@property (nonatomic) char hasMagneticCalibration;
@property (nonatomic) int magneticCalibration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsMagneticCalibration:(id)a0;
- (id)magneticCalibrationAsString:(int)a0;

@end
