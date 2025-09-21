@interface CLPLOGENTRYVISIONVIOInertialCovarianceInfo : PBCodable <NSCopying> {
    struct { unsigned char covarianceSizeInBytes : 1; unsigned char accelBiasCovOffset : 1; unsigned char accelBiasDof : 1; unsigned char covarianceSize : 1; unsigned char gyroBiasCovOffset : 1; unsigned char gyroBiasDof : 1; unsigned char orientationCovOffset : 1; unsigned char orientationDof : 1; unsigned char positionCovOffset : 1; unsigned char positionDof : 1; unsigned char velocityCovOffset : 1; unsigned char velocityDof : 1; } _has;
}

@property (nonatomic) char hasCovarianceSizeInBytes;
@property (nonatomic) unsigned long long covarianceSizeInBytes;
@property (nonatomic) char hasCovarianceSize;
@property (nonatomic) unsigned int covarianceSize;
@property (nonatomic) char hasOrientationCovOffset;
@property (nonatomic) unsigned int orientationCovOffset;
@property (nonatomic) char hasOrientationDof;
@property (nonatomic) unsigned int orientationDof;
@property (nonatomic) char hasGyroBiasCovOffset;
@property (nonatomic) unsigned int gyroBiasCovOffset;
@property (nonatomic) char hasGyroBiasDof;
@property (nonatomic) unsigned int gyroBiasDof;
@property (nonatomic) char hasVelocityCovOffset;
@property (nonatomic) unsigned int velocityCovOffset;
@property (nonatomic) char hasVelocityDof;
@property (nonatomic) unsigned int velocityDof;
@property (nonatomic) char hasAccelBiasCovOffset;
@property (nonatomic) unsigned int accelBiasCovOffset;
@property (nonatomic) char hasAccelBiasDof;
@property (nonatomic) unsigned int accelBiasDof;
@property (nonatomic) char hasPositionCovOffset;
@property (nonatomic) unsigned int positionCovOffset;
@property (nonatomic) char hasPositionDof;
@property (nonatomic) unsigned int positionDof;

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
