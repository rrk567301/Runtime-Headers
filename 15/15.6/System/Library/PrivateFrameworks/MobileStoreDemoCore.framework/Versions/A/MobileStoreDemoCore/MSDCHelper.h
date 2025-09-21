@class NSMutableArray, NSXPCConnection;

@interface MSDCHelper : NSObject

@property long long noOfRetries;
@property (retain) NSMutableArray *userCredentials;
@property (retain) NSXPCConnection *updaterConnection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)getDemoUserCredentials;
- (char)isDeviceEnrolledOnAlbert;
- (void)kickStartDeKOTA;
- (char)downloadDekotaPackage;
- (void)enrollUsingHubDetails:(id)a0;
- (id)getDeKOTAUserCredentials;
- (char)isDemodUpdateInstallInProgress;
- (char)markDemodUpdateAsToBeInstalledOnNextBootWithExpectedOSBuild:(id)a0 outError:(id *)a1;
- (id)prepareDemodUpdateForOSVersion:(id)a0 outError:(id *)a1;
- (char)purgeDemodUpdateToBeInstalled;
- (char)setupAsDemoDevice:(id *)a0;
- (void)setupConnectionIfNeeded;
- (char)validatePasswordEnteredByUser:(id)a0 skipScreen:(char *)a1;
- (id)versionOfCurrentInstalledDemodPkg;

@end
