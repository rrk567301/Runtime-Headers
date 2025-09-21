@class NSString, NSMutableArray;

@interface HKActivitySummaryQuery : HKQuery <HKActivitySummaryQueryClientInterface> {
    char _initialHandlerCalled;
    id /* block */ _completionHandler;
    NSMutableArray *_pendingActivitySummaries;
}

@property (nonatomic) char shouldIncludeActivitySummaryPrivateProperties;
@property (nonatomic) char shouldIncludeActivitySummaryStatistics;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) char orderByDateAscending;
@property (nonatomic) unsigned long long limit;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)a0;

- (void).cxx_destruct;
- (void)client_deliverActivitySummaries:(id)a0 isFinalBatch:(char)a1 clearPendingBatches:(char)a2 queryUUID:(id)a3;
- (id)initWithPredicate:(id)a0 resultsHandler:(id /* block */)a1;
- (void)queue_deliverError:(id)a0;
- (void)queue_populateConfiguration:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (char)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)setShouldIncludePrivateActivitySummaryProperties:(char)a0;

@end
