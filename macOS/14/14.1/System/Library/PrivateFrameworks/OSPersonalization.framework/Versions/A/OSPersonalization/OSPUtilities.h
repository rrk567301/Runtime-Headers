@interface OSPUtilities : NSObject

+ (void)initializeRestoreLogging;
+ (BOOL)isRunningAppleInternalBuild;
+ (BOOL)isRunningOnAppleSilicon;
+ (id)mountPointPrefixForFile:(id)a0;
+ (id)sandboxURLWithLabel:(id)a0;
+ (unsigned int)unsignedIntFromPlistValue:(id)a0;
+ (id)weakStringConstant:(id)a0;

@end
