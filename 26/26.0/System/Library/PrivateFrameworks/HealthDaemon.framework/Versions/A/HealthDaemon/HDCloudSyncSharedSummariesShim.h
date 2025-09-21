@class HDProfile;

@interface HDCloudSyncSharedSummariesShim : NSObject <HDCloudSyncSharedSummariesShimProtocol> {
    HDProfile *_profile;
}

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)deleteAllSharedSummaryTransactionsWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)deviceIdentifierWithCompletion:(id /* block */)a0;
- (void)deleteTransactions:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllSharedSummaryTransactionsWithRepository:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllTransactionsWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)prepareAndCommitRepository:(id)a0 transactionWithUUID:(id)a1 sourceDeviceIdentifier:(id)a2 metadata:(id)a3 sharedSummaries:(id)a4 completion:(id /* block */)a5;
- (void)summariesFromTransaction:(id)a0 authorizationIdentifiers:(id)a1 completion:(id /* block */)a2;

@end
