@class CMGyroData, CMMagnetometerData, CMAccelerometerData, CMDeviceMotion;
@protocol CMMotionVirtualDevice;

@interface CMMotionManager : NSObject {
    id _internal;
}

@property (class, retain) id<CMMotionVirtualDevice> virtualAlmondDevice;

@property (readonly, nonatomic, getter=isDeviceMotionLiteAvailable) BOOL isDeviceMotionLiteAvailable;
@property (nonatomic) double accelerometerUpdateInterval;
@property (readonly, nonatomic, getter=isAccelerometerAvailable) BOOL accelerometerAvailable;
@property (readonly, nonatomic, getter=isAccelerometerActive) BOOL accelerometerActive;
@property (readonly) CMAccelerometerData *accelerometerData;
@property (nonatomic) double gyroUpdateInterval;
@property (readonly, nonatomic, getter=isGyroAvailable) BOOL gyroAvailable;
@property (readonly, nonatomic, getter=isGyroActive) BOOL gyroActive;
@property (readonly) CMGyroData *gyroData;
@property (nonatomic) double magnetometerUpdateInterval;
@property (readonly, nonatomic, getter=isMagnetometerAvailable) BOOL magnetometerAvailable;
@property (readonly, nonatomic, getter=isMagnetometerActive) BOOL magnetometerActive;
@property (readonly) CMMagnetometerData *magnetometerData;
@property (nonatomic) double deviceMotionUpdateInterval;
@property (readonly, nonatomic) unsigned long long attitudeReferenceFrame;
@property (readonly, nonatomic, getter=isDeviceMotionAvailable) BOOL deviceMotionAvailable;
@property (readonly, nonatomic, getter=isDeviceMotionActive) BOOL deviceMotionActive;
@property (readonly) CMDeviceMotion *deviceMotion;
@property (nonatomic) BOOL showsDeviceMovementDisplay;

+ (id)sharedManager;
+ (unsigned long long)availableAttitudeReferenceFrames;

- (void)dealloc;
- (id)init;
- (id)deviceMotion;
- (void)startDeviceMotionUpdates;
- (void)startDeviceMotionUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (double)accelerometerUpdateInterval;
- (void)setAccelerometerUpdateInterval:(double)a0;
- (id)accelerometerData;
- (void)startAccelerometerUpdates;
- (void)startAccelerometerUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopAccelerometerUpdates;
- (double)gyroUpdateInterval;
- (void)setGyroUpdateInterval:(double)a0;
- (id)gyroData;
- (void)startGyroUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startGyroUpdates;
- (void)stopGyroUpdates;
- (double)deviceMotionUpdateInterval;
- (void)setDeviceMotionUpdateInterval:(double)a0;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(unsigned long long)a0;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(unsigned long long)a0 toQueue:(id)a1 withHandler:(id /* block */)a2;
- (void)stopDeviceMotionUpdates;
- (unsigned long long)attitudeReferenceFrame;
- (void)dismissDeviceMovementDisplay;
- (void)startMagnetometerUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startMagnetometerUpdates;
- (void)stopMagnetometerUpdates;
- (void)startDeviceMotionLiteUpdatesForDeviceID:(id)a0 usingConfiguration:(struct { int x0; })a1 toQueue:(id)a2 withFusedHandler:(id /* block */)a3;
- (void)startDeviceMotionLiteFusedUpdatesForDeviceID:(id)a0 toQueue:(id)a1 withHandler:(id /* block */)a2;
- (void)stopDeviceMotionLiteUpdatesForDeviceID:(id)a0;

@end
