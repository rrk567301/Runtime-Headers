@class NSXPCConnection;

@interface INDaemonConnection : NSObject {
    NSXPCConnection *_connection;
}

- (id)synchronousDaemonWithErrorHandler:(id /* block */)a0;
- (void)registerAccount:(id)a0 foriCloudNotificationsWithReason:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)renewCredentialsWithCompletion:(id /* block */)a0;
- (void)notifyDeviceStorageLevel:(long long)a0 completion:(id /* block */)a1;
- (BOOL)clearAllRegistrationDigestsWithError:(id *)a0;
- (BOOL)registerAccount:(id)a0 foriCloudNotificationsWithReason:(unsigned long long)a1 error:(id *)a2;
- (void)presentHiddenFreshmintWithContext:(id)a0 completion:(id /* block */)a1;
- (void)performAMSEngagementWithParameters:(id)a0 completion:(id /* block */)a1;
- (void)unregisterDeviceFromLoggedOutiCloudNotificationsWithCompletion:(id /* block */)a0;
- (void)iCloudServerOfferForAccount:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)displayDelayedOfferWithContext:(id)a0 completion:(id /* block */)a1;
- (void)updateOfferForAccount:(id)a0 offerId:(id)a1 buttonId:(id)a2 info:(id)a3 completion:(id /* block */)a4;
- (void)observeFPItem:(id)a0 notifyURL:(id)a1 completion:(id /* block */)a2;
- (void)handleChatterboxURL:(id)a0 completion:(id /* block */)a1;
- (BOOL)unregisterAccount:(id)a0 fromiCloudNotificationsWithError:(id *)a1;
- (void)performPostPurchaseTeardownWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)daemonWithErrorHandler:(id /* block */)a0;
- (void)getCacheDataForLink:(id)a0 completion:(id /* block */)a1;
- (void)unregisterAccount:(id)a0 fromiCloudNotificationsWithCompletion:(id /* block */)a1;
- (void)appLaunchLinkDidPresentForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)notifyAMSEngagementAppDidBecomeActiveWithCompletion:(id /* block */)a0;
- (void)commonHeadersForRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)remoteFreshmintFlowCompletedWithSuccess:(BOOL)a0 completion:(id /* block */)a1;
- (void)registerDeviceForLoggedOutiCloudNotificationsWithReason:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)diagnosticReport;
- (void)dealloc;
- (void)teardownOffersForAccount:(id)a0 withCompletion:(id /* block */)a1;

@end
