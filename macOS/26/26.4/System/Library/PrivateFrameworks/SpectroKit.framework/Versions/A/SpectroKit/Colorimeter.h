@class NSArray, NSString, SpectralGroup;

@interface Colorimeter : NSObject

@property (retain, nonatomic) NSArray *tranformationMatrix;
@property (retain, nonatomic) NSArray *ambientTranformationMatrix;
@property (retain, nonatomic) SpectralGroup *sensitivities;
@property (retain, nonatomic) SpectralGroup *ambientSensitivities;
@property (retain, nonatomic) SpectralGroup *edr;
@property (copy, nonatomic) NSString *basePath;

- (void).cxx_destruct;
- (id)init;
- (void)setEDRFromFile:(id)a0;
- (void)buildTranformationMatrix;
- (id)calculateAmbientWithRawCounts:(id)a0;
- (id)calculateXYZWithRawCounts:(id)a0;
- (id)computeCalibrationMatrixRectWithDeviceXYZ:(id)a0 sensorRGB:(id)a1;
- (id)computeCalibrationMatrixSquareWithDeviceXYZ:(id)a0 sensorRGB:(id)a1;
- (id)computeCalibrationMatrixWithDeviceXYZ:(id)a0 sensorRGB:(id)a1;
- (double)getHighestSensitivity;
- (void)setSensitivitiesFromFile:(id)a0;

@end
