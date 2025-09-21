@class CLPLocationProcessingMetadata, CLPVehicleType, CLPMotionActivity, CLPPipelineDiagnosticReport, CLPSatelliteReport, NSMutableArray, CLPBaroCalibrationIndication;

@interface CLPLocation : PBCodable <NSCopying> {
    struct { unsigned char altitude : 1; unsigned char context : 1; unsigned char course : 1; unsigned char courseAccuracy : 1; unsigned char floor : 1; unsigned char horzUncSemiMaj : 1; unsigned char horzUncSemiMajAz : 1; unsigned char horzUncSemiMin : 1; unsigned char modeIndicator : 1; unsigned char motionActivityConfidence : 1; unsigned char motionActivityType : 1; unsigned char provider : 1; unsigned char speed : 1; unsigned char speedAccuracy : 1; unsigned char verticalAccuracy : 1; unsigned char isFromLocationController : 1; unsigned char isProactiveLocation : 1; unsigned char motionVehicleConnected : 1; unsigned char motionVehicleConnectedStateChanged : 1; } _has;
}

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) float horizontalAccuracy;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasAltitude;
@property (nonatomic) float altitude;
@property (nonatomic) char hasVerticalAccuracy;
@property (nonatomic) float verticalAccuracy;
@property (nonatomic) char hasSpeed;
@property (nonatomic) float speed;
@property (nonatomic) char hasCourse;
@property (nonatomic) float course;
@property (nonatomic) char hasContext;
@property (nonatomic) int context;
@property (nonatomic) char hasMotionActivityType;
@property (nonatomic) int motionActivityType;
@property (nonatomic) char hasMotionActivityConfidence;
@property (nonatomic) int motionActivityConfidence;
@property (nonatomic) char hasProvider;
@property (nonatomic) int provider;
@property (nonatomic) char hasFloor;
@property (nonatomic) int floor;
@property (retain, nonatomic) NSMutableArray *appBundleIdIndices;
@property (nonatomic) char hasMotionVehicleConnectedStateChanged;
@property (nonatomic) char motionVehicleConnectedStateChanged;
@property (nonatomic) char hasMotionVehicleConnected;
@property (nonatomic) char motionVehicleConnected;
@property (readonly, nonatomic) char hasRawMotionActivity;
@property (retain, nonatomic) CLPMotionActivity *rawMotionActivity;
@property (readonly, nonatomic) char hasMotionActivity;
@property (retain, nonatomic) CLPMotionActivity *motionActivity;
@property (readonly, nonatomic) char hasDominantMotionActivity;
@property (retain, nonatomic) CLPMotionActivity *dominantMotionActivity;
@property (nonatomic) char hasCourseAccuracy;
@property (nonatomic) float courseAccuracy;
@property (nonatomic) char hasSpeedAccuracy;
@property (nonatomic) float speedAccuracy;
@property (nonatomic) char hasModeIndicator;
@property (nonatomic) int modeIndicator;
@property (nonatomic) char hasHorzUncSemiMaj;
@property (nonatomic) float horzUncSemiMaj;
@property (nonatomic) char hasHorzUncSemiMin;
@property (nonatomic) float horzUncSemiMin;
@property (nonatomic) char hasHorzUncSemiMajAz;
@property (nonatomic) float horzUncSemiMajAz;
@property (readonly, nonatomic) char hasSatReport;
@property (retain, nonatomic) CLPSatelliteReport *satReport;
@property (nonatomic) char hasIsFromLocationController;
@property (nonatomic) char isFromLocationController;
@property (readonly, nonatomic) char hasPipelineDiagnosticReport;
@property (retain, nonatomic) CLPPipelineDiagnosticReport *pipelineDiagnosticReport;
@property (readonly, nonatomic) char hasBaroCalibrationIndication;
@property (retain, nonatomic) CLPBaroCalibrationIndication *baroCalibrationIndication;
@property (readonly, nonatomic) char hasProcessingMetadata;
@property (retain, nonatomic) CLPLocationProcessingMetadata *processingMetadata;
@property (nonatomic) char hasIsProactiveLocation;
@property (nonatomic) char isProactiveLocation;
@property (readonly, nonatomic) char hasVehicleType;
@property (retain, nonatomic) CLPVehicleType *vehicleType;

+ (Class)appBundleIdIndicesType;

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
- (int)StringAsModeIndicator:(id)a0;
- (void)addAppBundleIdIndices:(id)a0;
- (id)appBundleIdIndicesAtIndex:(unsigned long long)a0;
- (unsigned long long)appBundleIdIndicesCount;
- (void)clearAppBundleIdIndices;
- (id)modeIndicatorAsString:(int)a0;

@end
