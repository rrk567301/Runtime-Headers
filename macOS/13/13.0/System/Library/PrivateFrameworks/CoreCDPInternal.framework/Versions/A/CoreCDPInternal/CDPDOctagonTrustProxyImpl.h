@class NSString, CDPContext;

@interface CDPDOctagonTrustProxyImpl : NSObject <CDPDOctagonTrustProxy>

@property (retain, nonatomic) CDPContext *cdpContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)fetchEscrowRecords:(id)a0 forceFetch:(BOOL)a1 error:(id *)a2;
- (id)fetchAllEscrowRecords:(id)a0 forceFetch:(BOOL)a1 error:(id *)a2;
- (id)tlkRecoverabilityForEscrow:(id)a0 record:(id)a1 error:(id *)a2;

@end
