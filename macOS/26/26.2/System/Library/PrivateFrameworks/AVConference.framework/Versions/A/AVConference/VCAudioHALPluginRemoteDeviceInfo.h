@class NSString;

@interface VCAudioHALPluginRemoteDeviceInfo : NSObject

@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *deviceUID;
@property (copy, nonatomic) NSString *modelUID;

- (id)init;
- (void)dealloc;

@end
