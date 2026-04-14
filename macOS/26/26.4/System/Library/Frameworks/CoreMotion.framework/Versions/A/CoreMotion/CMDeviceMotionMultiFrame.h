@interface CMDeviceMotionMultiFrame : CMLogItem

@property (nonatomic) struct { struct { double w; double x; double y; double z; } quaternion; struct { float x; float y; float z; } userAcceleration; struct { float x; float y; float z; } rotationRate; struct { float x; float y; float z; } magneticField; int magneticFieldCalibrationLevel; BOOL doingYawCorrection; BOOL doingBiasEstimation; BOOL isInitialized; float heading; BOOL fusedWithVision; BOOL usingVisionCorrections; int sensorLocation; } deviceMotion;
@property (nonatomic) struct { float headingAccuracy; struct { float x; float y; float z; } biasEstimateVariance; } deviceMotionInternal;
@property (nonatomic) struct { double w; double x; double y; double z; } bodyFrameRotationFromSensorToDefault;
@property (nonatomic) double referenceFrameDeltaYawFromArbitraryToTrueNorth;

- (id)initWithDeviceMotion:(struct { struct { double x0; double x1; double x2; double x3; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct { float x0; float x1; float x2; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; float x8; BOOL x9; BOOL x10; int x11; })a0 internal:(struct { float x0; struct { float x0; float x1; float x2; } x1; })a1 timestamp:(double)a2;
- (id)deviceMotionWithReferenceFrame:(unsigned long long)a0 bodyFrame:(long long)a1;

@end
