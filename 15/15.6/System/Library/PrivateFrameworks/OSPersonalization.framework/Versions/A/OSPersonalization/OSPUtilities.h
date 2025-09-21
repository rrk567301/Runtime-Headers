@interface OSPUtilities : NSObject

+ (unsigned long long)cpuCoreCount;
+ (char)ignoreAuthInstallErrorInTestMode:(unsigned long long)a0;
+ (void)initializeRestoreLogging;
+ (char)isRunningAppleInternalBuild;
+ (char)isRunningOnAppleSilicon;
+ (char)mergeDirectoryAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
+ (id)mountPointPrefixForFile:(id)a0;
+ (id)sandboxURLWithLabel:(id)a0;
+ (unsigned int)unsignedIntFromPlistValue:(id)a0;
+ (id)weakStringConstant:(id)a0;

@end
