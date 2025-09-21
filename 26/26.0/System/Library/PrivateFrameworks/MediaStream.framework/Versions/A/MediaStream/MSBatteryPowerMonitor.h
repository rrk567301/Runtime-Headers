@interface MSBatteryPowerMonitor : NSObject

@property (readonly, nonatomic) BOOL isExternalPowerConnected;

+ (BOOL)isExternalPowerConnected:(double *)a0;
+ (id)defaultMonitor;

- (double)batteryPercentRemaining;

@end
