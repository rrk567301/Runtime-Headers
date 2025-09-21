@interface GameStoreKit.ProductAskToBuyPresenter : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ appStateController;
    void /* unknown type, empty encoding */ restrictions;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ arcadeSubscriptionManager;
    void /* unknown type, empty encoding */ productPage;
    void /* unknown type, empty encoding */ isAskToBuyEnabled;
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ onStatusChange;
}

- (void)handleAskToBuyRequestSent:(id)a0;
- (void)updateStatusAndNotifyIfNeeded;

@end
