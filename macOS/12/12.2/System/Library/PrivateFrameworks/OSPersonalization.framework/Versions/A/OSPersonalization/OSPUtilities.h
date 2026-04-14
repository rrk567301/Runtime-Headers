@interface OSPUtilities : NSObject

+ (id)sandboxURLWithLabel:(id)a0;
+ (id)weakStringConstant:(id)a0;
+ (BOOL)isRunningOnAppleSilicon;
+ (id)mountPointPrefixForFile:(id)a0;
+ (void)initializeRestoreLogging;
+ (BOOL)isRunningAppleInternalBuild;

@end
