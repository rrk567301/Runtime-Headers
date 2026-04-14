@interface GameStoreKit.ProductAskToBuyPresenter : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ appStateController;
    void /* unknown type, empty encoding */ restrictions;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ arcadeSubscriptionManager;
    void /* unknown type, empty encoding */ _productPage;
    void /* unknown type, empty encoding */ _isAskToBuyEnabled;
    void /* unknown type, empty encoding */ _adamId;
    void /* unknown type, empty encoding */ _offerDisplayProperties;
    void /* unknown type, empty encoding */ _offerButtonAction;
    void /* unknown type, empty encoding */ _status;
    void /* unknown type, empty encoding */ onStatusChange;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void)handleAskToBuyRequestSent:(id)a0;
- (void)updateStatusAndNotifyIfNeeded;

@end
