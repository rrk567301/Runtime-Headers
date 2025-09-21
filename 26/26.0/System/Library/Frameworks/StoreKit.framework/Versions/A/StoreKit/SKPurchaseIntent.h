@class NSString;

@interface SKPurchaseIntent : NSObject {
    void /* unknown type, empty encoding */ bundleID;
    void /* unknown type, empty encoding */ productID;
    void /* unknown type, empty encoding */ appName;
    void /* unknown type, empty encoding */ productName;
    void /* function */ additionalBuyParams;
}

@property (nonatomic, copy) NSString *additionalBuyParams;

- (void)send:(void (^)(void))a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBundleId:(id)a0 productIdentifier:(id)a1 appName:(id)a2 productName:(id)a3;

@end
