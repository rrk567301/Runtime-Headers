@interface AVCaptureAutoExposureBracketedStillImageSettings_Tundra : AVCaptureBracketedStillImageSettings_Tundra

@property (readonly) float exposureTargetBias;

+ (id)autoExposureSettingsWithExposureTargetBias:(float)a0;

- (id)description;
- (id)debugDescription;
- (id)_initAutoExposureSettingsWithExposureTargetBias:(float)a0;

@end
