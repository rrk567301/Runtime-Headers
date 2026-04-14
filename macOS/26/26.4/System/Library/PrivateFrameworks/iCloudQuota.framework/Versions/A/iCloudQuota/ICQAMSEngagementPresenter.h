@class AMSSystemEngagementTask;

@interface ICQAMSEngagementPresenter : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _taskLock;
    AMSSystemEngagementTask *_pendingTask;
}

+ (id)sharedPresenter;

- (void)performAMSEngagementWithParameters:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)_clientDataFromActParams:(id)a0;
- (void)_launchAMSEngagementWithURL:(id)a0 params:(id)a1 originatorBundleId:(id)a2 bag:(id)a3 completion:(id /* block */)a4;
- (id)_metricsOverlayFromActParams:(id)a0 account:(id)a1;
- (void)_performPostPurchaseTeardown;
- (void)clearPendingEngagement;
- (void)reactivatePendingEngagementWithCompletion:(id /* block */)a0;

@end
