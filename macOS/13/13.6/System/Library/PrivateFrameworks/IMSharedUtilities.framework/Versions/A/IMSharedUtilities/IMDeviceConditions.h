@interface IMDeviceConditions : NSObject

@property (readonly) BOOL isDeviceCharging;
@property (readonly) BOOL isDeviceOnWifi;
@property (readonly) BOOL isDeviceOnData;

+ (id)sharedInstance;

@end
