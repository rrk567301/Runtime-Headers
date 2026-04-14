@interface _KSDeviceStateMonitor : NSObject

@property (nonatomic) BOOL isContentProtectionAvailable;

+ (id)deviceStateMonitor;
+ (BOOL)isRunningOnInternalBuild;

- (BOOL)isDataAvailableForClassC;
- (id)init;
- (void)dealloc;

@end
