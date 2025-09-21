@class NSArray, CMBatchedSensorManagerInternal;

@interface CMBatchedSensorManager : NSObject {
    CMBatchedSensorManagerInternal *_internal;
}

@property (class, readonly, nonatomic) long long authorizationStatus;
@property (class, readonly, nonatomic, getter=isAccelerometerSupported) char accelerometerSupported;
@property (class, readonly, nonatomic, getter=isDeviceMotionSupported) char deviceMotionSupported;

@property (readonly, nonatomic, getter=isAccelerometerActive) char accelerometerActive;
@property (readonly, nonatomic) long long accelerometerDataFrequency;
@property (readonly) NSArray *accelerometerBatch;
@property (readonly, nonatomic) long long deviceMotionDataFrequency;
@property (readonly, nonatomic, getter=isDeviceMotionActive) char deviceMotionActive;
@property (readonly) NSArray *deviceMotionBatch;

- (void)dealloc;
- (id)init;
- (void)startAccelerometerUpdates;
- (void)startDeviceMotionUpdates;
- (void)stopAccelerometerUpdates;
- (void)stopDeviceMotionUpdates;
- (void)startAccelerometerUpdatesWithHandler:(id /* block */)a0;
- (void)startDeviceMotionUpdatesWithHandler:(id /* block */)a0;

@end
