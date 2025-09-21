@interface _LTDANEServiceHardwareProvider : NSObject <_LTDANEServiceDataProvider>

+ (char)isAvailable;
+ (id)subType;
+ (void)logCapabilities;

@end
