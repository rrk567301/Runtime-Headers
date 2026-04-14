@interface UVMacOSApplicationLauncher : NSObject

+ (void)_launchApplicationAtURL:(id)a0 foreground:(BOOL)a1 arguments:(id)a2 environment:(id)a3 architectureType:(int)a4 architectureSubtype:(int)a5 completionHandler:(id /* block */)a6 retriesRemaining:(unsigned long long)a7;
+ (void)killExistingMacCatalystInstancesAtURL:(id)a0;
+ (void)_updateAccessibilityLaunchInfoForProcess:(struct __LSASN { } *)a0;
+ (void)killASN:(struct __LSASN { } *)a0;
+ (void)launchApplicationAtURL:(id)a0 foreground:(BOOL)a1 arguments:(id)a2 environment:(id)a3 architectureType:(int)a4 architectureSubtype:(int)a5 completionHandler:(id /* block */)a6;
+ (void)killPID:(int)a0;

@end
