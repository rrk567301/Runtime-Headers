@class NSString, CDPContext;

@interface CDPDOctagonTrustProxyImpl : NSObject <CDPDOctagonTrustProxy>

@property (class, readonly, nonatomic) BOOL octagonIsSOSFeatureEnabled;

@property (retain, nonatomic) CDPContext *cdpContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (BOOL)isRecoveryKeySet:(id)a0 error:(id *)a1;
- (BOOL)cacheRecoveryKey:(id)a0 forAltDSID:(id)a1 error:(id *)a2;
- (void)fetchEscrowRecords:(id)a0 forceFetch:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchAllEscrowRecords:(id)a0 source:(long long)a1 completion:(id /* block */)a2;
- (BOOL)registerRecoveryKey:(id)a0 error:(id *)a1;
- (void)fetchEscrowRecords:(id)a0 source:(long long)a1 completion:(id /* block */)a2;
- (id)tlkRecoverabilityForEscrow:(id)a0 record:(id)a1 source:(long long)a2 error:(id *)a3;
- (BOOL)disableRecoveryKey:(id *)a0;
- (unsigned long long)_cdpEscrowRecordViabilityStateFromRepairReason:(long long)a0;
- (void)_retryableFetchAllEscrowRecordWithContext:(id)a0 completion:(id /* block */)a1;
- (id)tlkRecoverabilityForEscrow:(id)a0 record:(id)a1 error:(id *)a2;
- (void)_retryableFetchEscrowRecordWithContext:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllEscrowRecords:(id)a0 forceFetch:(BOOL)a1 completion:(id /* block */)a2;
- (void)escrowCheckWithIsBackground:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
