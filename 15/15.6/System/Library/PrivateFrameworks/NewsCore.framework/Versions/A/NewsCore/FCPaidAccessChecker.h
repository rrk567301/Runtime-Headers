@protocol FCPurchaseProviderType, FCBundleSubscriptionProviderType, FCCoreConfigurationManager;

@interface FCPaidAccessChecker : NSObject <FCPaidAccessCheckerType> {
    id<FCCoreConfigurationManager> _configurationManager;
}

@property (readonly, nonatomic) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider;
@property (readonly, nonatomic) id<FCPurchaseProviderType> purchaseProvider;

- (void).cxx_destruct;
- (char)canGetAccessToItemPaid:(char)a0 bundlePaid:(char)a1 channel:(id)a2;
- (char)canGetBundleSubscriptionToChannel:(id)a0;
- (char)canGetSubscriptionToChannel:(id)a0;
- (id)initWithPurchaseProvider:(id)a0 bundleSubscriptionProvider:(id)a1 configurationManager:(id)a2;
- (char)isPreparedForUse;
- (void)prepareForUseWithCompletion:(id /* block */)a0;

@end
