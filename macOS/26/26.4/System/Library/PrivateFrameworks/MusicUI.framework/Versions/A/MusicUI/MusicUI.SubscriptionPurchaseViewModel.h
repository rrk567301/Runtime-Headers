@interface MusicUI.SubscriptionPurchaseViewModel : NSObject <AMSUIPurchaseDelegate> {
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ buyParams;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ actionDispatcher;
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ metricsOverlay;
    void /* unknown type, empty encoding */ performanceMetricsOverlay;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ presentingViewController;
}

- (void).cxx_destruct;
- (id)init;
- (void)purchase:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleEngagementRequest:(id)a1 completion:(id /* block */)a2;

@end
