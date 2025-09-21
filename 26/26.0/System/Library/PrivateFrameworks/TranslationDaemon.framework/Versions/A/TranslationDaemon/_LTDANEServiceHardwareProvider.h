@interface _LTDANEServiceHardwareProvider : NSObject <_LTDANEServiceDataProvider>

+ (id)subType;
+ (BOOL)isAvailable;
+ (void)logCapabilities;

@end
