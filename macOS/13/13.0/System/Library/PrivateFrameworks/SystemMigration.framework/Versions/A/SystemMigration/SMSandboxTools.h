@interface SMSandboxTools : NSObject

+ (id)sandboxPath;
+ (void)removeSandboxAtURL:(id)a0;
+ (id)_dhsafeTemporaryDirectory;
+ (id)sandboxPathWithName:(id)a0;
+ (BOOL)prepareSandboxForSystem:(id)a0 atPath:(id)a1 sandBoxPath:(id)a2;
+ (BOOL)shoveSandboxAtPath:(id)a0 sandBoxPath:(id)a1 error:(id *)a2;
+ (void)clearExistingBundleOnTarget:(id)a0;
+ (BOOL)shoveSandboxAtPath:(id)a0 sandBoxPath:(id)a1 destinationPath:(id)a2 error:(id *)a3;
+ (id)retreiveErrorFromShoveFailures:(id)a0 forErrorCode:(int)a1;
+ (void)cleanupSandboxForSystem:(id)a0 atPath:(id)a1 sandBoxPath:(id)a2;

@end
