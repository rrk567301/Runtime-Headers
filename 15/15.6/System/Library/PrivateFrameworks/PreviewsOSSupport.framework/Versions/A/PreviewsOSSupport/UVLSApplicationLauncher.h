@interface UVLSApplicationLauncher : NSObject

+ (void)killPID:(int)a0;
+ (void)launchApplicationAtURL:(id)a0 activate:(char)a1 hidden:(char)a2 waitForAppInit:(char)a3 openBackground:(char)a4 arguments:(id)a5 architectureType:(int)a6 architectureSubtype:(int)a7 environment:(id)a8 completionHandler:(id /* block */)a9;
+ (void)_launchApplicationAtURL:(id)a0 activate:(char)a1 hidden:(char)a2 waitForAppInit:(char)a3 openBackground:(char)a4 arguments:(id)a5 architectureType:(int)a6 architectureSubtype:(int)a7 environment:(id)a8 completionHandler:(id /* block */)a9 retriesRemaining:(unsigned long long)a10;
+ (void)_updateAccessibilityLaunchInfoForProcess:(struct __LSASN { } *)a0;
+ (void)killASN:(struct __LSASN { } *)a0;
+ (void)killExistingMacCatalystInstancesAtURL:(id)a0;

@end
