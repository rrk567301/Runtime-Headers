@interface AppStoreComponentsDaemonKit.AppOfferStateClient : NSObject <ASCAppOfferStateService> {
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ appStateController;
    void /* unknown type, empty encoding */ arcadeSubscription;
    void /* unknown type, empty encoding */ restrictions;
    void /* unknown type, empty encoding */ contingentOffers;
    void /* unknown type, empty encoding */ appStoreInstallStateMonitor;
    void /* unknown type, empty encoding */ jsStackManager;
    void /* unknown type, empty encoding */ localizer;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ stateLock;
    void /* unknown type, empty encoding */ observations;
    void /* unknown type, empty encoding */ isUpdatingArcadeSubscription;
    void /* unknown type, empty encoding */ isUpdatingContingentOfferSubscription;
    void /* unknown type, empty encoding */ appDistribution;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)viewAppForAppDistributionOffer:(id)a0;
- (void)decorateBuyParamsForOffer:(id)a0 withActivity:(id)a1 withReplyHandler:(id /* block */)a2;
- (void)performActionOfOffer:(id)a0 withActivity:(id)a1 inContext:(id)a2 withReplyHandler:(id /* block */)a3;
- (void)reinstallWatchAppWithID:(id)a0 withReplyHandler:(id /* block */)a1;
- (void)reinstallWatchSystemAppWithBundleID:(id)a0 withReplyHandler:(id /* block */)a1;
- (void)startObservingStateOfOffers:(id)a0;
- (void)stopObservingStateOfOffers:(id)a0;
- (void)didChangeAppCapabilities:(id)a0;

@end
