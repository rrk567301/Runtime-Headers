@class NSString;

@interface HKMCPregnancyStateQuery : HKQuery <HKMCPregnancyStateQueryClientInterface> {
    id /* block */ _updateHandler;
}

@property (readonly, nonatomic) BOOL isRunningForMaintenance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)a0;

- (void)queue_queryDidDeactivate:(id)a0;
- (void)queue_populateConfiguration:(id)a0;
- (void)queue_validate;
- (void)queue_deliverError:(id)a0;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void).cxx_destruct;
- (id)initWithUpdateHandler:(id /* block */)a0;
- (void)client_deliverPregnancyModel:(id)a0 queryUUID:(id)a1;
- (id)initWithIsRunningForMaintenance:(BOOL)a0 updateHandler:(id /* block */)a1;

@end
