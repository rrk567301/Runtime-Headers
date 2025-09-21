@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface CMBatchedSensorManagerInternal : NSObject {
    void *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_dataQueue;
    BOOL _available;
    id /* block */ _accelHandler;
    BOOL _accelActive;
    id /* block */ _deviceMotionHandler;
    BOOL _deviceMotionActive;
}

@property (retain) NSArray *accelBatch;
@property (retain) NSArray *deviceMotionBatch;

+ (id)_newArrayByUnpackingAccelerometerBatch:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
+ (id)_newArrayByUnpackingDeviceMotionBatch:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
+ (BOOL)areBatchedSensorsSupported;

- (void)dealloc;
- (id)init;
- (void)_connect;
- (void)_teardown;
- (void)_startDeviceMotionUpdates;
- (void)_stopDeviceMotionUpdates;
- (void)_startAccelerometerUpdates;
- (void)_startAccelerometerUpdatesWithHandler:(id /* block */)a0;
- (void)_startDeviceMotionUpdatesWithHandler:(id /* block */)a0;
- (void)_stopAccelerometerUpdates;

@end
