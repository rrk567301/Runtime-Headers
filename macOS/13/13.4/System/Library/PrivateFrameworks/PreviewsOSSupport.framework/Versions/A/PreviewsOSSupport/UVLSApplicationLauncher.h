@interface UVLSApplicationLauncher : NSObject

+ (void)killPID:(int)a0;
+ (void)launchApplicationAtURL:(id)a0 activate:(BOOL)a1 hidden:(BOOL)a2 openBackground:(BOOL)a3 arguments:(id)a4 architectureType:(int)a5 architectureSubtype:(int)a6 environment:(id)a7 completionHandler:(id /* block */)a8;
+ (void)_launchApplicationAtURL:(id)a0 activate:(BOOL)a1 hidden:(BOOL)a2 openBackground:(BOOL)a3 arguments:(id)a4 architectureType:(int)a5 architectureSubtype:(int)a6 environment:(id)a7 completionHandler:(id /* block */)a8 retriesRemaining:(unsigned long long)a9;
+ (void)_updateAccessibilityLaunchInfoForProcess:(struct __LSASN { } *)a0;
+ (void)killASN:(struct __LSASN { } *)a0;
+ (void)killExistingMacCatalystInstancesAtURL:(id)a0;

@end
