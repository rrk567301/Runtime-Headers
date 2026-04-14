@class NSOperationQueue, NSString;

@interface CMMotionManagerInternal : NSObject {
    double fAccelerometerUpdateInterval;
    double fGyroUpdateInterval;
    double fDeviceMotionUpdateInterval;
    double fMagnetometerUpdateInterval;
    BOOL fShowsDeviceMovementDisplay;
    struct unique_ptr<CLDeviceMotionLiteService, std::default_delete<CLDeviceMotionLiteService>> { struct __compressed_pair<CLDeviceMotionLiteService *, std::default_delete<CLDeviceMotionLiteService>> { struct CLDeviceMotionLiteService *__value_; } __ptr_; } fDeviceMotionLiteService;
}

@property (retain, nonatomic) NSOperationQueue *fDeviceMotionLiteClientQueue;
@property (copy, nonatomic) id /* block */ fDeviceMotionLiteFusedHandler;
@property (retain, nonatomic) NSString *fDeviceMotionLitePhysicalDeviceID;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
