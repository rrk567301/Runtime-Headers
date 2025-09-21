@class CLPLOGENTRYVISIONTimeStamp, CLPLOGENTRYVISIONVIOInertialStateInfo, CLPLOGENTRYVISIONCGSize, NSData, CLPLOGENTRYVISIONVIOInertialCovarianceInfo, CLPLOGENTRYVISIONSimdFloatMxN;

@interface CLPLOGENTRYVISIONVIOEstimation : PBCodable <NSCopying> {
    struct { unsigned char trackingState : 1; } _has;
}

@property (nonatomic) char hasTrackingState;
@property (nonatomic) int trackingState;
@property (readonly, nonatomic) char hasOriginTimestamp;
@property (retain, nonatomic) CLPLOGENTRYVISIONTimeStamp *originTimestamp;
@property (readonly, nonatomic) char hasTimestamp;
@property (retain, nonatomic) CLPLOGENTRYVISIONTimeStamp *timestamp;
@property (readonly, nonatomic) char hasInertialStateInfo;
@property (retain, nonatomic) CLPLOGENTRYVISIONVIOInertialStateInfo *inertialStateInfo;
@property (readonly, nonatomic) char hasInertialState;
@property (retain, nonatomic) NSData *inertialState;
@property (readonly, nonatomic) char hasInertialCovarianceInfo;
@property (retain, nonatomic) CLPLOGENTRYVISIONVIOInertialCovarianceInfo *inertialCovarianceInfo;
@property (readonly, nonatomic) char hasInertialCovariance;
@property (retain, nonatomic) NSData *inertialCovariance;
@property (readonly, nonatomic) char hasCameraPose;
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdFloatMxN *cameraPose;
@property (readonly, nonatomic) char hasCameraIntrinsics;
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdFloatMxN *cameraIntrinsics;
@property (readonly, nonatomic) char hasCameraImageResolution;
@property (retain, nonatomic) CLPLOGENTRYVISIONCGSize *cameraImageResolution;

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
- (int)StringAsTrackingState:(id)a0;
- (id)trackingStateAsString:(int)a0;

@end
