@class HIDDevice, AASensorInfo;

@interface AAHIDDevice : NSObject

@property (readonly, copy, nonatomic) HIDDevice *hidDevice;
@property (nonatomic) BOOL isSetupComplete;
@property (nonatomic) BOOL isSubscribed;
@property (copy, nonatomic) AASensorInfo *sensorInfo;

- (void).cxx_destruct;
- (id)initWithHIDDeviceAndSensorInfo:(id)a0 sensorInfo:(id)a1;

@end
