@class CMDeviceMotion, CMGyroData, CMAccelerometerData, NSOperationQueue, NSObject;
@protocol OS_dispatch_source;

@interface UINSVirtualMotionDevice : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _spinLock;
    long long _orientation;
    struct { double w; double x; double y; double z; } _deviceQuaternion;
    struct { double w; double x; double y; double z; } _orientedQuaternion;
    double _lastDeviceUpdateTimestamp;
    NSObject<OS_dispatch_source> *_accelerometerDispatchSource;
    char _accelerometerDispatchIsActive;
    id /* block */ _accelerometerHandler;
    NSOperationQueue *_accelerometerHandlerQueue;
    double _accelerometerUpdateInterval;
    NSObject<OS_dispatch_source> *_gyroDispatchSource;
    char _gyroDispatchIsActive;
    id /* block */ _gyroHandler;
    NSOperationQueue *_gyroHandlerQueue;
    double _gyroUpdateInterval;
    double _gyroLastTimestamp;
    struct { float x; float y; float z; } _gyroLastGravity;
    NSObject<OS_dispatch_source> *_deviceMotionDispatchSource;
    char _deviceMotionDispatchIsActive;
    id /* block */ _deviceMotionHandler;
    NSOperationQueue *_deviceMotionHandlerQueue;
    double _deviceMotionUpdateInterval;
    struct { float x; float y; float z; } _deviceMotionLastGravity;
    double _deviceMotionLastTimestamp;
    CMAccelerometerData *_accelerometerData;
    CMGyroData *_gyroData;
    CMDeviceMotion *_deviceMotion;
    id /* block */ _animationBlock;
}

@property (class, readonly) UINSVirtualMotionDevice *sharedVirtualMotionDevice;

@property (readonly, getter=isAccelerometerAvailable) char accelerometerAvailable;
@property (readonly, getter=isAccelerometerActive) char accelerometerActive;
@property double accelerometerUpdateInterval;
@property (readonly, getter=isGyroAvailable) char gyroAvailable;
@property (readonly, getter=isGyroActive) char gyroActive;
@property double gyroUpdateInterval;
@property (readonly, getter=isDeviceMotionAvailable) char deviceMotionAvailable;
@property (readonly, getter=isDeviceMotionActive) char deviceMotionActive;
@property double deviceMotionUpdateInterval;
@property (readonly) CMDeviceMotion *deviceMotion;
@property long long orientation;
@property (copy) id /* block */ animationBlock;
@property (readonly) CMAccelerometerData *accelerometerData;
@property (readonly) CMGyroData *gyroData;
@property (readonly) CMDeviceMotion *deviceMotionData;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stopGyroUpdates;
- (void)_scanAccelerometer;
- (void)_scanDeviceMotion;
- (void)_scanGyro;
- (void)setPortraitDeviceQuaternion:(struct { double x0; double x1; double x2; double x3; })a0 timestamp:(double)a1;
- (void)startAccelerometerUpdates;
- (void)startAccelerometerUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startDeviceMotionUpdates;
- (void)startDeviceMotionUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(unsigned long long)a0;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(unsigned long long)a0 toQueue:(id)a1 withHandler:(id /* block */)a2;
- (void)startGyroUpdates;
- (void)startGyroUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopAccelerometerUpdates;
- (void)stopDeviceMotionUpdates;
- (void)unsafeClearAnimationBlock;
- (void)unsafeSetPortraitDeviceQuaternion:(struct { double x0; double x1; double x2; double x3; })a0 timestamp:(double)a1;

@end
