@interface CLPLOGENTRYVISIONVIOInertialStateInfo : PBCodable <NSCopying> {
    struct { unsigned char stateLengthInBytes : 1; unsigned char accelBiasLength : 1; unsigned char accelBiasOffset : 1; unsigned char gyroBiasLength : 1; unsigned char gyroBiasOffset : 1; unsigned char orientationLength : 1; unsigned char orientationOffset : 1; unsigned char positionLength : 1; unsigned char positionOffset : 1; unsigned char stateLength : 1; unsigned char velocityLength : 1; unsigned char velocityOffset : 1; } _has;
}

@property (nonatomic) char hasStateLengthInBytes;
@property (nonatomic) unsigned long long stateLengthInBytes;
@property (nonatomic) char hasStateLength;
@property (nonatomic) unsigned int stateLength;
@property (nonatomic) char hasOrientationOffset;
@property (nonatomic) unsigned int orientationOffset;
@property (nonatomic) char hasOrientationLength;
@property (nonatomic) unsigned int orientationLength;
@property (nonatomic) char hasGyroBiasOffset;
@property (nonatomic) unsigned int gyroBiasOffset;
@property (nonatomic) char hasGyroBiasLength;
@property (nonatomic) unsigned int gyroBiasLength;
@property (nonatomic) char hasVelocityOffset;
@property (nonatomic) unsigned int velocityOffset;
@property (nonatomic) char hasVelocityLength;
@property (nonatomic) unsigned int velocityLength;
@property (nonatomic) char hasAccelBiasOffset;
@property (nonatomic) unsigned int accelBiasOffset;
@property (nonatomic) char hasAccelBiasLength;
@property (nonatomic) unsigned int accelBiasLength;
@property (nonatomic) char hasPositionOffset;
@property (nonatomic) unsigned int positionOffset;
@property (nonatomic) char hasPositionLength;
@property (nonatomic) unsigned int positionLength;

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
