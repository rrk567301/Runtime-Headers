@interface SMSandboxTools : NSObject

+ (id)sandboxPath;
+ (BOOL)shoveSandboxAtPath:(id)a0 sandBoxPath:(id)a1 destinationPath:(id)a2 error:(id *)a3;
+ (BOOL)prepareSandboxForSystem:(id)a0 atPath:(id)a1 sandBoxPath:(id)a2;
+ (id)sandboxPathWithName:(id)a0;
+ (id)_dhsafeTemporaryDirectory;
+ (void)removeSandboxAtURL:(id)a0;
+ (void)clearExistingBundleOnTarget:(id)a0;
+ (id)retreiveErrorFromShoveFailures:(id)a0 forErrorCode:(int)a1;
+ (BOOL)shoveSandboxAtPath:(id)a0 sandBoxPath:(id)a1 error:(id *)a2;
+ (void)cleanupSandboxForSystem:(id)a0 atPath:(id)a1 sandBoxPath:(id)a2;

@end
