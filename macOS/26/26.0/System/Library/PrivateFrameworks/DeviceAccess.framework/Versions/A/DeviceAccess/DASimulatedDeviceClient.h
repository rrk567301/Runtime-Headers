@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface DASimulatedDeviceClient : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}

@property (copy, nonatomic) NSString *deviceBonjourServiceType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void)invalidate;
- (void)_invalidated;
- (id)init;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (void)activate;
- (void).cxx_destruct;

@end
