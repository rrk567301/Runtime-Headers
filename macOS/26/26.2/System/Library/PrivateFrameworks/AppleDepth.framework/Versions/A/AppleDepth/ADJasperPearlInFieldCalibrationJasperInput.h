@class ADJasperPointCloud;

@interface ADJasperPearlInFieldCalibrationJasperInput : NSObject

@property (retain, nonatomic) ADJasperPointCloud *bankPointCloud;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } jasperBankPose;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;

@end
