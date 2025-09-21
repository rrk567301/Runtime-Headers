@interface DeviceActivity.Feature : NSObject

@property (class, nonatomic, readonly) char isDeviceActivityEnabled;
@property (class, nonatomic, readonly) char isDeviceActivityBiomeEnabled;
@property (class, nonatomic, readonly) char isDeviceActivityUIEnabled;

- (id)init;

@end
