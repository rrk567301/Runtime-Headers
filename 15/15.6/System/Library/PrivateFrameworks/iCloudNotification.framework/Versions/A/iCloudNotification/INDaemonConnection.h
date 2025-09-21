@class NSXPCConnection;

@interface INDaemonConnection : NSObject {
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)daemonWithErrorHandler:(id /* block */)a0;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)a0;
- (void)renewCredentialsWithCompletion:(id /* block */)a0;
- (void)unregisterDeviceFromLoggedOutiCloudNotificationsWithCompletion:(id /* block */)a0;
- (void)getCacheDataForLink:(id)a0 completion:(id /* block */)a1;
- (void)appLaunchLinkDidPresentForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (char)clearAllRegistrationDigestsWithError:(id *)a0;
- (void)commonHeadersForRequest:(id)a0 withCompletion:(id /* block */)a1;
- (id)diagnosticReport;
- (void)displayDelayedOfferWithContext:(id)a0 completion:(id /* block */)a1;
- (void)iCloudServerOfferForAccount:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)notifyDeviceStorageLevel:(long long)a0 completion:(id /* block */)a1;
- (void)presentHiddenFreshmintWithContext:(id)a0 completion:(id /* block */)a1;
- (void)registerAccount:(id)a0 foriCloudNotificationsWithReason:(unsigned long long)a1 completion:(id /* block */)a2;
- (char)registerAccount:(id)a0 foriCloudNotificationsWithReason:(unsigned long long)a1 error:(id *)a2;
- (void)registerDeviceForLoggedOutiCloudNotificationsWithReason:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)remoteFreshmintFlowCompletedWithSuccess:(char)a0 completion:(id /* block */)a1;
- (void)teardownOffersForAccount:(id)a0 withCompletion:(id /* block */)a1;
- (void)unregisterAccount:(id)a0 fromiCloudNotificationsWithCompletion:(id /* block */)a1;
- (char)unregisterAccount:(id)a0 fromiCloudNotificationsWithError:(id *)a1;
- (void)updateOfferForAccount:(id)a0 offerId:(id)a1 buttonId:(id)a2 info:(id)a3 completion:(id /* block */)a4;

@end
