@class ADJasperPearlTelemetryData, NSNumber, NSData;

@interface ADJasperPearlInFieldCalibrationResult : NSObject

@property (retain, nonatomic) ADJasperPearlTelemetryData *telemetryData;
@property (retain, nonatomic) NSNumber *efl;
@property (retain, nonatomic) NSNumber *principalPointX;
@property (retain, nonatomic) NSNumber *principalPointY;
@property (retain, nonatomic) NSNumber *temperature;
@property (retain, nonatomic) NSData *pceCalib;

- (void).cxx_destruct;

@end
