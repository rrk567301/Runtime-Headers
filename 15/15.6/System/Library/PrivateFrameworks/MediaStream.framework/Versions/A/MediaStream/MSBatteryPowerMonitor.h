@interface MSBatteryPowerMonitor : NSObject

@property (readonly, nonatomic) char isExternalPowerConnected;

+ (id)defaultMonitor;
+ (char)isExternalPowerConnected:(double *)a0;

- (double)batteryPercentRemaining;

@end
