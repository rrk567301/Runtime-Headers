@class CLPLOGENTRYVISIONVLLocalizationResult, CLPOutdoorUpdate, CLPIndoorCMPedometer, CLPLocation, CLPBundleId, CLPIndoorMotionActivity, CLPWorkoutUpdateMotionActivity, CLPInertialOdometry, CLPCellConnectivityInfo, CLPIndoorCMAttitude, CLPIndoorWifiScan, CLPIndoorPressure, CLPLOGENTRYVISIONVIOEstimation;

@interface CLPIndoorEvent : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasCmAttitude;
@property (retain, nonatomic) CLPIndoorCMAttitude *cmAttitude;
@property (readonly, nonatomic) BOOL hasCmPedometer;
@property (retain, nonatomic) CLPIndoorCMPedometer *cmPedometer;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) CLPLocation *location;
@property (readonly, nonatomic) BOOL hasMotionActivity;
@property (retain, nonatomic) CLPIndoorMotionActivity *motionActivity;
@property (readonly, nonatomic) BOOL hasPressure;
@property (retain, nonatomic) CLPIndoorPressure *pressure;
@property (readonly, nonatomic) BOOL hasWifiScan;
@property (retain, nonatomic) CLPIndoorWifiScan *wifiScan;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) CLPBundleId *bundleId;
@property (readonly, nonatomic) BOOL hasVioEstimation;
@property (retain, nonatomic) CLPLOGENTRYVISIONVIOEstimation *vioEstimation;
@property (readonly, nonatomic) BOOL hasVlLocalizationResult;
@property (retain, nonatomic) CLPLOGENTRYVISIONVLLocalizationResult *vlLocalizationResult;
@property (readonly, nonatomic) BOOL hasWorkoutUpdateMotionActivity;
@property (retain, nonatomic) CLPWorkoutUpdateMotionActivity *workoutUpdateMotionActivity;
@property (readonly, nonatomic) BOOL hasInertialOdometry;
@property (retain, nonatomic) CLPInertialOdometry *inertialOdometry;
@property (readonly, nonatomic) BOOL hasOutdoorUpdate;
@property (retain, nonatomic) CLPOutdoorUpdate *outdoorUpdate;
@property (readonly, nonatomic) BOOL hasCellConnectivity;
@property (retain, nonatomic) CLPCellConnectivityInfo *cellConnectivity;

- (int)StringAsType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)typeAsString:(int)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
