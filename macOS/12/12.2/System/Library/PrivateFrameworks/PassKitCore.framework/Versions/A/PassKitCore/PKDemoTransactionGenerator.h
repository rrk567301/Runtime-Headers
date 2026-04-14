@interface PKDemoTransactionGenerator : NSObject

+ (void)generateDemoFilesForPasses:(id)a0 accountUsers:(id)a1 peerPaymentPassSerialNumber:(id)a2;
+ (id)itemIdentifierForPass:(id)a0;
+ (id)itemIdentifierForAccountUser:(id)a0;
+ (id)_recordSpecificKeysForConfiguration:(id)a0;
+ (void)generateDemoFilesWithCompletion:(id /* block */)a0;
+ (void)demoTransactionsAndEventsForItemIdentifier:(id)a0 configuration:(id)a1 transactions:(id *)a2 events:(id *)a3;
+ (void)demoTransactionsAndEventsWithConfiguration:(id)a0 transactions:(id *)a1 events:(id *)a2;
+ (id)allMerchants;
+ (id)allPeople;
+ (void)insertTransactionAndEventsWithConfiguration:(id)a0 completion:(id /* block */)a1;
+ (long long)randomDemoMerchant;

@end
