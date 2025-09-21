@interface _KSDeviceStateMonitor : NSObject

@property (nonatomic) char isContentProtectionAvailable;

+ (char)isRunningOnInternalBuild;
+ (id)deviceStateMonitor;

- (void)dealloc;
- (id)init;
- (char)isDataAvailableForClassC;

@end
