@class NSString;

@interface HKUserAnnotatedMedicationQuery : HKQuery <HKUserAnnotatedMedicationQueryClientInterface> {
    unsigned long long _limit;
    id /* block */ _batchHandler;
}

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
- (void).cxx_destruct;
- (void)_enumerateUserAnnotatedMedicationsWithHandler:(id)a0 handler:(id /* block */)a1;
- (void)client_deliverUserAnnotatedMedications:(id)a0 queryUUID:(id)a1;
- (id)initWithPredicate:(id)a0 limit:(unsigned long long)a1 batchHandler:(id /* block */)a2;
- (id)initWithPredicate:(id)a0 limit:(unsigned long long)a1 resultsHandler:(id /* block */)a2;

@end
