@class NSMutableArray, NSXPCConnection;

@interface MSDCHelper : NSObject

@property long long noOfRetries;
@property (retain) NSMutableArray *userCredentials;
@property (retain) NSXPCConnection *updaterConnection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)isDeviceEnrolledOnAlbert;
- (id)getDemoUserCredentials;
- (BOOL)setupAsDemoDevice:(id *)a0;
- (void)enrollUsingHubDetails:(id)a0;
- (void)setupConnectionIfNeeded;
- (BOOL)validatePasswordEnteredByUser:(id)a0 skipScreen:(BOOL *)a1;
- (id)getDeKOTAUserCredentials;
- (BOOL)downloadDekotaPackage;
- (void)kickStartDeKOTA;
- (id)versionOfCurrentInstalledDemodPkg;
- (id)prepareDemodUpdateForOSVersion:(id)a0 outError:(id *)a1;
- (BOOL)isDemodUpdateInstallInProgress;
- (BOOL)markDemodUpdateAsToBeInstalledOnNextBootWithExpectedOSBuild:(id)a0 outError:(id *)a1;
- (BOOL)purgeDemodUpdateToBeInstalled;

@end
