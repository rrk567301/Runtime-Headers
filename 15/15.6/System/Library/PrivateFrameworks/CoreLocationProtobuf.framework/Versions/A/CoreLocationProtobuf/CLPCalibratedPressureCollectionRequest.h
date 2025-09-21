@class CLPMotionActivity, CLPBaroCalibrationIndication;

@interface CLPCalibratedPressureCollectionRequest : PBRequest <NSCopying> {
    struct { unsigned char latitudeDeg : 1; unsigned char longitudeDeg : 1; unsigned char timeSinceLastSignificantLocationVisitExitS : 1; unsigned char timestampOfCalibrationS : 1; unsigned char altitudeHAEM : 1; unsigned char altitudeHAEUncM : 1; unsigned char calibratedPressurePa : 1; unsigned char calibratedPressureUncPa : 1; unsigned char devicePressurePa : 1; unsigned char devicePressureUncPa : 1; unsigned char horizontalUncM : 1; unsigned char quantizedDistChangeSinceLastCalibrationM : 1; unsigned char quantizedTimeChangeSinceLastCalibrationS : 1; unsigned char referenceAltM : 1; unsigned char referenceAltUncM : 1; unsigned char reliability : 1; unsigned char speedMps : 1; unsigned char speedUncMps : 1; } _has;
}

@property (nonatomic) char hasDevicePressurePa;
@property (nonatomic) float devicePressurePa;
@property (nonatomic) char hasDevicePressureUncPa;
@property (nonatomic) float devicePressureUncPa;
@property (nonatomic) char hasCalibratedPressurePa;
@property (nonatomic) float calibratedPressurePa;
@property (nonatomic) char hasCalibratedPressureUncPa;
@property (nonatomic) float calibratedPressureUncPa;
@property (nonatomic) char hasTimestampOfCalibrationS;
@property (nonatomic) double timestampOfCalibrationS;
@property (nonatomic) char hasLatitudeDeg;
@property (nonatomic) double latitudeDeg;
@property (nonatomic) char hasLongitudeDeg;
@property (nonatomic) double longitudeDeg;
@property (nonatomic) char hasHorizontalUncM;
@property (nonatomic) float horizontalUncM;
@property (nonatomic) char hasAltitudeHAEM;
@property (nonatomic) float altitudeHAEM;
@property (nonatomic) char hasAltitudeHAEUncM;
@property (nonatomic) float altitudeHAEUncM;
@property (nonatomic) char hasSpeedMps;
@property (nonatomic) float speedMps;
@property (nonatomic) char hasSpeedUncMps;
@property (nonatomic) float speedUncMps;
@property (nonatomic) char hasReferenceAltM;
@property (nonatomic) float referenceAltM;
@property (nonatomic) char hasReferenceAltUncM;
@property (nonatomic) float referenceAltUncM;
@property (nonatomic) char hasTimeSinceLastSignificantLocationVisitExitS;
@property (nonatomic) double timeSinceLastSignificantLocationVisitExitS;
@property (readonly, nonatomic) char hasActivity;
@property (retain, nonatomic) CLPMotionActivity *activity;
@property (nonatomic) char hasReliability;
@property (nonatomic) int reliability;
@property (readonly, nonatomic) char hasCalibration;
@property (retain, nonatomic) CLPBaroCalibrationIndication *calibration;
@property (nonatomic) char hasQuantizedDistChangeSinceLastCalibrationM;
@property (nonatomic) int quantizedDistChangeSinceLastCalibrationM;
@property (nonatomic) char hasQuantizedTimeChangeSinceLastCalibrationS;
@property (nonatomic) int quantizedTimeChangeSinceLastCalibrationS;

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
- (int)StringAsReliability:(id)a0;
- (id)reliabilityAsString:(int)a0;

@end
