@class NSString, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface HMEnrollmentService : NSObject {
    NSString *_bluetoothDeviceAddress;
    NSData *_currentConfig;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_invalidate;
- (id)initWithDeviceAddress:(id)a0;

@end
