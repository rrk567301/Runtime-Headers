@interface _KSDeviceStateMonitor : NSObject

@property (nonatomic) BOOL isContentProtectionAvailable;

+ (BOOL)isRunningOnInternalBuild;
+ (id)deviceStateMonitor;

- (BOOL)isDataAvailableForClassC;
- (void)dealloc;
- (id)init;

@end
