@interface MXInitialization : NSObject

+ (void)start;
+ (void)initialize;
+ (void)AirPlayStartServicesInMXProcess;
+ (void)LoadAirPlaySenderFramework;
+ (void)notifyMXIsFullyInitialized;
+ (void)waitUntilMXIsFullyInitialized;

@end
