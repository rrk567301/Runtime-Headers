@interface _KSDeviceStateMonitor : NSObject

@property (nonatomic) BOOL isContentProtectionAvailable;

+ (id)deviceStateMonitor;
+ (BOOL)isRunningOnInternalBuild;

- (id)init;
- (void)dealloc;
- (BOOL)isDataAvailableForClassC;

@end
