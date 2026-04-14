@class PKAccount, PKTransactionSourceCollection;

@interface PKRewardsSummaryFetcher : NSObject {
    PKAccount *_account;
    PKTransactionSourceCollection *_transactionSourceCollection;
}

- (void).cxx_destruct;
- (id)initWithTransactionSourceCollection:(id)a0 account:(id)a1;
- (BOOL)isTransactionSourceIdentifierRelevant:(id)a0;
- (BOOL)isPaymentPassRelevant:(id)a0;
- (void)rewardsTierSummariesWithCompletion:(id /* block */)a0;
- (id)_relevantTransactionSourceIdentifiers;

@end
