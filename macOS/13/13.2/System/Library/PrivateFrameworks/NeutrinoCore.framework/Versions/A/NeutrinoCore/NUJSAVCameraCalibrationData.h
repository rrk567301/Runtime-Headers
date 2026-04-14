@class AVCameraCalibrationData;

@interface NUJSAVCameraCalibrationData : NUJSProxy <NUJSAVCameraCalibrationDataExport>

@property (readonly) AVCameraCalibrationData *cameraCalibrationData;

- (id)initWithRepresentedObject:(id)a0 context:(id)a1;
- (id)initWithDepthCameraCalibrationData:(id)a0 context:(id)a1;
- (id)nu_unwrapJSValue;

@end
