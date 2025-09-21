@class NSString, NSDictionary, HKCorrelationType, NSMutableArray;

@interface HKCorrelationQuery : HKQuery <HKCorrelationQueryClientInterface> {
    NSMutableArray *_correlationsPendingDelivery;
}

@property (readonly, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSDictionary *filterDictionary;
@property (readonly, copy) HKCorrelationType *correlationType;
@property (readonly, copy) NSDictionary *samplePredicates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)a0;
+ (char)shouldApplyAdditionalPredicateForObjectType:(id)a0;

- (void).cxx_destruct;
- (void)client_deliverCorrelations:(id)a0 clearPendingSamples:(char)a1 isFinalBatch:(char)a2 queryUUID:(id)a3;
- (id)initWithType:(id)a0 predicate:(id)a1 samplePredicates:(id)a2 completion:(id /* block */)a3;
- (void)queue_deliverError:(id)a0;
- (void)queue_populateConfiguration:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)queue_validate;

@end
