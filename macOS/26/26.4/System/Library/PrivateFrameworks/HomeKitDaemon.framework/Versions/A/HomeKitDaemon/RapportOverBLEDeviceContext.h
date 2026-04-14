@class HMFTimer, RPCompanionLinkDevice;

@interface RapportOverBLEDeviceContext : NSObject

@property (copy, nonatomic) HMFTimer *idleTimer;
@property (readonly, weak, nonatomic) RPCompanionLinkDevice *device;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;

@end
