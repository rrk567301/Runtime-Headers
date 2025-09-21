@class NSString;

@interface HKSharedSummaryTransactionQuery : HKQuery <HKSharedSummaryTransactionQueryClientInterface> {
    id /* block */ _initialHandler;
    BOOL _initialHandlerCalled;
    BOOL _committedTransactions;
}

@property (copy, nonatomic) id /* block */ updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)a0;

- (void)queue_queryDidDeactivate:(id)a0;
- (void)queue_populateConfiguration:(id)a0;
- (id)initWithHandler:(id /* block */)a0;
- (void)queue_deliverError:(id)a0;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void).cxx_destruct;
- (void)client_deliverTransactions:(id)a0 query:(id)a1;
- (id)initWithCommittedTransactions:(BOOL)a0 handler:(id /* block */)a1;

@end
