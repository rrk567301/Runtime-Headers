@class NSArray, NSString, NSMutableArray;

@interface HKSampleQuery : HKQuery <HKSampleQueryClientInterface> {
    unsigned long long _limit;
    NSArray *_sortDescriptors;
    NSMutableArray *_samplesPendingDelivery;
}

@property (readonly, copy, nonatomic) id /* block */ resultHandler;
@property (nonatomic) char includeAutomaticTimeZones;
@property (nonatomic) char includeContributorInformation;
@property (readonly) unsigned long long limit;
@property (readonly, copy) NSArray *sortDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)a0;
+ (id)sortDescriptorsForMostRecentSamples;

- (void).cxx_destruct;
- (char)_prepareSamplesForDelivery:(id)a0 error:(id *)a1;
- (void)client_deliverSamples:(id)a0 clearPendingSamples:(char)a1 isFinalBatch:(char)a2 queryUUID:(id)a3;
- (id)initWithQueryDescriptors:(id)a0 limit:(long long)a1 resultsHandler:(id /* block */)a2;
- (id)initWithQueryDescriptors:(id)a0 limit:(long long)a1 sortDescriptors:(id)a2 resultsHandler:(id /* block */)a3;
- (id)initWithSampleType:(id)a0 predicate:(id)a1 limit:(unsigned long long)a2 sortDescriptors:(id)a3 resultsHandler:(id /* block */)a4;
- (void)queue_deliverError:(id)a0;
- (void)queue_populateConfiguration:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)queue_validate;

@end
