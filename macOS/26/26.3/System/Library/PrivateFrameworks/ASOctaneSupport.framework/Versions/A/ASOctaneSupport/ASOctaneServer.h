@class NSXPCConnection;

@interface ASOctaneServer : NSObject {
    NSXPCConnection *_connectionToService;
}

+ (id)shared;

- (id)generateSKANPostbackSignature:(id)a0;
- (id)cancelTransactionWithIdentifier:(unsigned long long)a0 forBundleID:(id)a1;
- (id)deleteTransactionWithIdentifier:(unsigned long long)a0 forBundleID:(id)a1;
- (id)startPriceIncreaseForTransactionID:(unsigned long long)a0 bundleID:(id)a1 needsConsent:(BOOL)a2;
- (id)resolveIssueForTransactionWithIdentifier:(unsigned long long)a0 forBundleID:(id)a1;
- (id)expireOrRenewSubscriptionWithIdentifier:(id)a0 expire:(BOOL)a1 forBundleID:(id)a2;
- (void)getIntegerValueForIdentifier:(unsigned long long)a0 forBundleID:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (id)registerForEventOfType:(long long)a0 withFilterData:(id)a1;
- (long long)storeKitErrorForCategory:(long long)a0 bundleID:(id)a1;
- (id)setStringValue:(id)a0 forIdentifier:(unsigned long long)a1 forBundleID:(id)a2;
- (id)completePriceConsentRequestWithResponse:(BOOL)a0 transactionIdentifier:(unsigned long long)a1 forBundleID:(id)a2;
- (id)completeAskToBuyRequestWithResponse:(BOOL)a0 transactionID:(unsigned long long)a1 forBundleID:(id)a2;
- (void).cxx_destruct;
- (id)getStringValueForIdentifier:(unsigned long long)a0 forBundleID:(id)a1;
- (id)clearOverridesForBundleID:(id)a0;
- (void)buyProductWithConfiguration:(id)a0 withReply:(id /* block */)a1;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)buyProductWithID:(id)a0 bundleID:(id)a1;
- (void)useConfigurationDirectory:(id)a0 forBundleID:(id)a1;
- (void)unregisterForEventWithIdentifier:(id)a0;
- (id)getTransactionDataForBundleID:(id)a0;
- (id)getStorefrontForBundleID:(id)a0;
- (id)setStorefront:(id)a0 forBundleID:(id)a1;
- (long long)getIntegerValueForIdentifier:(unsigned long long)a0 forBundleID:(id)a1;
- (id)changeAutoRenewStatus:(BOOL)a0 transactionID:(unsigned long long)a1 bundleID:(id)a2;
- (id)deleteAllTransactionsForBundleID:(id)a0;
- (long long)activePort;
- (void)appRemovedWithBundleID:(id)a0;
- (id)setIntegerValue:(long long)a0 forIdentifier:(unsigned long long)a1 forBundleID:(id)a2;
- (id)refundTransactionWithIdentifier:(unsigned long long)a0 forBundleID:(id)a1;
- (void)setStoreKitError:(long long)a0 forCategory:(long long)a1 bundleID:(id)a2;
- (id)_synchronousRemoteObjectProxy:(id *)a0;

@end
