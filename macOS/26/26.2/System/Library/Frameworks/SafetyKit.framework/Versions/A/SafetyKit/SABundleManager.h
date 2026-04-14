@class NSObject;
@protocol SAApplicationLauncher, OS_tcc_message_options, OS_tcc_service, OS_tcc_server;

@interface SABundleManager : NSObject {
    id<SAApplicationLauncher> _applicationLauncher;
    NSObject<OS_tcc_server> *_server;
    NSObject<OS_tcc_service> *_service;
    NSObject<OS_tcc_message_options> *_options;
}

+ (id)bundleURLForCurrentConnection;
+ (id)bundleURLForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (void)getRemoteApplicationNameWithBundleId:(id)a0 withCompletion:(id /* block */)a1;
+ (id)crashDetectionManager;
+ (id)locationBundle;
+ (id)approvedBundleIdsForService:(struct __CFString { } *)a0;
+ (id)reasonToAttributeName:(long long)a0;
+ (id)remoteApplicationWithBundleId:(id)a0 error:(id *)a1;

- (void)openApplicationInForegroundWithBundleId:(id)a0 withReason:(long long)a1 completion:(id /* block */)a2;
- (id)pairedDeviceBundleIdForId:(id)a0;
- (id)initWithServiceName:(struct __CFString { } *)a0;
- (void).cxx_destruct;
- (void)wakeApprovedAppsWithReason:(long long)a0 completion:(id /* block */)a1;
- (void)openApplicationInBackgroundWithBundleId:(id)a0 withReason:(long long)a1 completion:(id /* block */)a2;
- (id)approvedApps;

@end
