@class NSSet, FCThreadSafeMutableSet, FCExperimentalPaywallConfiguration;
@protocol FCBundleCampaignManagerType, FCCoreConfigurationManager, FCBundleSubscriptionProviderType, FCPurchaseProviderType;

@interface FCPaidAccessChecker : NSObject <FCPaidAccessCheckerType> {
    id<FCCoreConfigurationManager> _configurationManager;
    id /* block */ _configurationBlock;
    FCThreadSafeMutableSet *_notificationOpenedArticleIDsSet;
}

@property (readonly, nonatomic) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider;
@property (readonly, nonatomic) id<FCBundleCampaignManagerType> bundleCampaignManager;
@property (readonly, nonatomic) id<FCPurchaseProviderType> purchaseProvider;
@property (readonly, nonatomic) FCExperimentalPaywallConfiguration *experimentalPaywallConfig;
@property (readonly, nonatomic) NSSet *notificationOpenedArticleIDs;

- (id)initWithPurchaseProvider:(id)a0 bundleSubscriptionProvider:(id)a1 configurationManager:(id)a2;
- (void)prepareForUseWithCompletion:(id /* block */)a0;
- (BOOL)isPreparedForUse;
- (BOOL)canGetSubscriptionToChannel:(id)a0;
- (BOOL)canGetBundleSubscriptionToChannelID:(id)a0;
- (void).cxx_destruct;
- (id)initWithPurchaseProvider:(id)a0 bundleSubscriptionProvider:(id)a1 configuration:(id)a2;
- (BOOL)canGetAccessToItemWithIdentifier:(id)a0 paid:(BOOL)a1 bundlePaid:(BOOL)a2 channel:(id)a3;
- (void)recordNotificationOpenedWithArticleID:(id)a0;
- (BOOL)canGetBundleSubscriptionToChannel:(id)a0;

@end
