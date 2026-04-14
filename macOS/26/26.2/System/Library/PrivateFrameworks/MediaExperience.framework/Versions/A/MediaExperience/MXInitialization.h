@interface MXInitialization : NSObject

+ (void)initialize;
+ (void)start;
+ (void)AirPlayStartServicesInMXProcess;
+ (void)LoadAirPlaySenderFramework;
+ (void)notifyMXIsFullyInitialized;
+ (void)waitUntilMXIsFullyInitialized;

@end
