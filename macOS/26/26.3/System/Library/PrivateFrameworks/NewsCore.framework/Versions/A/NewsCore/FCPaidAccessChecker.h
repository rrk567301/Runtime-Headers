@protocol FCPurchaseProviderType, FCBundleSubscriptionProviderType, FCCoreConfigurationManager;

@interface FCPaidAccessChecker : NSObject <FCPaidAccessCheckerType> {
    id<FCCoreConfigurationManager> _configurationManager;
}

@property (readonly, nonatomic) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider;
@property (readonly, nonatomic) id<FCPurchaseProviderType> purchaseProvider;

- (id)initWithPurchaseProvider:(id)a0 bundleSubscriptionProvider:(id)a1 configurationManager:(id)a2;
- (BOOL)canGetBundleSubscriptionToChannel:(id)a0;
- (void).cxx_destruct;
- (BOOL)canGetAccessToItemPaid:(BOOL)a0 bundlePaid:(BOOL)a1 channel:(id)a2;
- (BOOL)canGetSubscriptionToChannel:(id)a0;
- (void)prepareForUseWithCompletion:(id /* block */)a0;
- (BOOL)isPreparedForUse;

@end
