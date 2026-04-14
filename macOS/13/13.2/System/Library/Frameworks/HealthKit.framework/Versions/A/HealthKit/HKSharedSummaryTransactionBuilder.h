@class NSUUID, NSString, HKTaskServerProxyProvider;

@interface HKSharedSummaryTransactionBuilder : NSObject <_HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly, copy, nonatomic) NSUUID *transactionUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)connectionInterrupted;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)addMetadata:(id)a0 completion:(id /* block */)a1;
- (id)initWithHealthStore:(id)a0;
- (id)initWithHealthStore:(id)a0 transactionUUID:(id)a1;
- (void)addSummaries:(id)a0 completion:(id /* block */)a1;
- (void)reuseSummariesWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)reuseSummariesWithPackage:(id)a0 names:(id)a1 completion:(id /* block */)a2;
- (void)reuseAllSummariesWithPackage:(id)a0 completion:(id /* block */)a1;
- (void)removeSummariesWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)removeSummariesWithPackage:(id)a0 names:(id)a1 completion:(id /* block */)a2;
- (void)removeAllSummariesWithPackage:(id)a0 completion:(id /* block */)a1;
- (void)commitAsUrgent:(BOOL)a0 completion:(id /* block */)a1;
- (void)commitWithCompletion:(id /* block */)a0;
- (void)discardWithCompletion:(id /* block */)a0;
- (void)addedSummariesWithPackage:(id)a0 names:(id)a1 resultsHandler:(id /* block */)a2;
- (void)allAddedSummariesWithPackage:(id)a0 resultsHandler:(id /* block */)a1;

@end
