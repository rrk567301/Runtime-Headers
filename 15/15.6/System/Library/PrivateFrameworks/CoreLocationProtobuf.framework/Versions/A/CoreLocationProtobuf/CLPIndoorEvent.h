@class CLPLOGENTRYVISIONVIOEstimation, CLPBundleId, CLPLOGENTRYVISIONVLLocalizationResult, CLPWorkoutUpdateMotionActivity, CLPInertialOdometry, CLPIndoorCMPedometer, CLPIndoorCMAttitude, CLPOutdoorUpdate, CLPLocation, CLPIndoorMotionActivity, CLPIndoorWifiScan, CLPIndoorPressure;

@interface CLPIndoorEvent : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasCmAttitude;
@property (retain, nonatomic) CLPIndoorCMAttitude *cmAttitude;
@property (readonly, nonatomic) char hasCmPedometer;
@property (retain, nonatomic) CLPIndoorCMPedometer *cmPedometer;
@property (readonly, nonatomic) char hasLocation;
@property (retain, nonatomic) CLPLocation *location;
@property (readonly, nonatomic) char hasMotionActivity;
@property (retain, nonatomic) CLPIndoorMotionActivity *motionActivity;
@property (readonly, nonatomic) char hasPressure;
@property (retain, nonatomic) CLPIndoorPressure *pressure;
@property (readonly, nonatomic) char hasWifiScan;
@property (retain, nonatomic) CLPIndoorWifiScan *wifiScan;
@property (readonly, nonatomic) char hasBundleId;
@property (retain, nonatomic) CLPBundleId *bundleId;
@property (readonly, nonatomic) char hasVioEstimation;
@property (retain, nonatomic) CLPLOGENTRYVISIONVIOEstimation *vioEstimation;
@property (readonly, nonatomic) char hasVlLocalizationResult;
@property (retain, nonatomic) CLPLOGENTRYVISIONVLLocalizationResult *vlLocalizationResult;
@property (readonly, nonatomic) char hasWorkoutUpdateMotionActivity;
@property (retain, nonatomic) CLPWorkoutUpdateMotionActivity *workoutUpdateMotionActivity;
@property (readonly, nonatomic) char hasInertialOdometry;
@property (retain, nonatomic) CLPInertialOdometry *inertialOdometry;
@property (readonly, nonatomic) char hasOutdoorUpdate;
@property (retain, nonatomic) CLPOutdoorUpdate *outdoorUpdate;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;

@end
