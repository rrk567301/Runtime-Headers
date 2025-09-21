@class NSString, HKQueryAnchor, NSMutableArray;

@interface HKAnchoredObjectQuery : HKQuery <HKAnchoredObjectQueryClientInterface> {
    char _initialHandlerCalled;
    NSMutableArray *_samplesPendingDelivery;
    NSMutableArray *_deletedObjectsPendingDelivery;
    _Atomic BOOL _includeDeletedObjects;
    HKQueryAnchor *_currentAnchor;
}

@property (nonatomic) double collectionInterval;
@property (readonly, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) HKQueryAnchor *anchor;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) char includeAutomaticTimeZones;
@property (nonatomic) char ignoreDeletedObjects;
@property (nonatomic) char includeContributorInformation;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)a0;

- (void).cxx_destruct;
- (void)client_deliverSampleObjects:(id)a0 deletedObjects:(id)a1 anchor:(id)a2 clearPendingSamples:(char)a3 deliverResults:(char)a4 query:(id)a5;
- (id)initWithQueryDescriptors:(id)a0 anchor:(id)a1 limit:(long long)a2 resultsHandler:(id /* block */)a3;
- (id)initWithType:(id)a0 predicate:(id)a1 anchor:(unsigned long long)a2 limit:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (id)initWithType:(id)a0 predicate:(id)a1 anchor:(id)a2 limit:(unsigned long long)a3 resultsHandler:(id /* block */)a4;
- (void)queue_deliverError:(id)a0;
- (void)queue_populateConfiguration:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (char)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;

@end
