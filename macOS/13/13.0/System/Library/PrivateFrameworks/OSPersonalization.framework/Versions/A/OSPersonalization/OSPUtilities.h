@interface OSPUtilities : NSObject

+ (void)initializeRestoreLogging;
+ (id)sandboxURLWithLabel:(id)a0;
+ (BOOL)isRunningAppleInternalBuild;
+ (BOOL)isRunningOnAppleSilicon;
+ (id)mountPointPrefixForFile:(id)a0;
+ (id)weakStringConstant:(id)a0;
+ (unsigned int)unsignedIntFromPlistValue:(id)a0;

@end
