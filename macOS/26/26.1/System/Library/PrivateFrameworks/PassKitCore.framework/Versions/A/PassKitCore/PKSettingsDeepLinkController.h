@protocol PKSettingsDeepLinkControllerDataSource, PKSettingsDeepLinkControllerDelegate;

@interface PKSettingsDeepLinkController : NSObject {
    id<PKSettingsDeepLinkControllerDataSource> _dataSource;
    id<PKSettingsDeepLinkControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)init;
- (id)_percentEncodeReferrerIdentifier:(id)a0;
- (void)_presentTransactionDetailsForTransactionWithIdentifier:(id)a0 confirmPaymentOfferPlan:(BOOL)a1;
- (void)_presentTransactionDetailsForTransactionWithServiceIdentifier:(id)a0 transactionSourceIdentifier:(id)a1 confirmPaymentOfferPlan:(BOOL)a2;
- (void)handleDeepLinkResourceDictionary:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithDataSource:(id)a0 delegate:(id)a1;

@end
