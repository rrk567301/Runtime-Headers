@interface IMDeviceConditions : NSObject

@property (readonly) char isDeviceCharging;
@property (readonly) char isDeviceOnWifi;
@property (readonly) char isDeviceOnData;
@property (readonly) char isOnLowBandwidthCellular;

+ (id)sharedInstance;

@end
