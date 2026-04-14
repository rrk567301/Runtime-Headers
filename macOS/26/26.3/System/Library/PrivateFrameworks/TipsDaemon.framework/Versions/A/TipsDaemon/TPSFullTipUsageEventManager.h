@interface TPSFullTipUsageEventManager : NSObject {
    void /* unknown type, empty encoding */ tipIDToContextualInfoMap;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ initialized;
}

- (id)contextualInfoForIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)contextualInfoMap;
- (void)removeUsageEventCache;
- (void)updateContextualInfoForIdentifiers:(id)a0 tipsDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2;

@end
