@class HKWorkoutBuilder, NSString;

@interface HKWorkoutBuilderSampleQuery : HKQuery <HKWorkoutBuilderSampleQueryClientInterface> {
    id /* block */ _samplesAddedHandler;
    id /* block */ _quantitiesAddedHandler;
    char _needsHistoricalFetch;
}

@property (weak, nonatomic) HKWorkoutBuilder *workoutBuilder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)a0;

- (void).cxx_destruct;
- (void)client_deliverQuantities:(id)a0 hasFinishedHistoricalFetch:(char)a1 queryUUID:(id)a2;
- (void)client_deliverSamples:(id)a0 hasFinishedHistoricalFetch:(char)a1 queryUUID:(id)a2;
- (id)initWithQuantityType:(id)a0 workoutBuilder:(id)a1 quantitiesAddedHandler:(id /* block */)a2;
- (id)initWithSampleType:(id)a0 workoutBuilder:(id)a1 samplesAddedHandler:(id /* block */)a2;
- (void)queue_deliverError:(id)a0;
- (void)queue_populateConfiguration:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (char)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;

@end
