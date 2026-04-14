@interface UVMacOSApplicationLauncher : NSObject

+ (void)_launchApplicationAtURL:(id)a0 isRelaunch:(BOOL)a1 allowExistingInstance:(BOOL)a2 activate:(BOOL)a3 hidden:(BOOL)a4 addToRecents:(BOOL)a5 openBackground:(BOOL)a6 arguments:(id)a7 architectureType:(int)a8 architectureSubType:(int)a9 environment:(id)a10 completionHandler:(id /* block */)a11;
+ (void)killExistingMacCatalystInstancesAtURL:(id)a0;
+ (void)_updateAccessibilityLaunchInfoForProcess:(struct __LSASN { } *)a0;
+ (void)killASN:(struct __LSASN { } *)a0;
+ (void)launchApplicationAtURL:(id)a0 allowExistingInstance:(BOOL)a1 activate:(BOOL)a2 hidden:(BOOL)a3 addToRecents:(BOOL)a4 openBackground:(BOOL)a5 arguments:(id)a6 architectureType:(int)a7 architectureSubType:(int)a8 environment:(id)a9 completionHandler:(id /* block */)a10;
+ (void)killPID:(int)a0;

@end
