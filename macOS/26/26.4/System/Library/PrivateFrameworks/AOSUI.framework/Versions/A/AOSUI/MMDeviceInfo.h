@class NSString;

@interface MMDeviceInfo : NSObject

@property (readonly, nonatomic) NSString *udid;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) long long osTheme;

+ (id)deviceInfo;

- (void).cxx_destruct;
- (id)init;
- (long long)aquaInterface;

@end
