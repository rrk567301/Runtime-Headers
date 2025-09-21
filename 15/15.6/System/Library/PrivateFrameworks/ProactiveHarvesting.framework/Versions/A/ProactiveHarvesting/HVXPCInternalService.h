@class _PASXPCClientHelper;

@interface HVXPCInternalService : NSObject {
    _PASXPCClientHelper *_helper;
}

- (id)init;
- (void).cxx_destruct;
- (id)synchronousProxy;
- (char)deleteContentWithRequest:(id)a0 error:(id *)a1;
- (id)statsWithError:(id *)a0;
- (char)contentAvailableFromSources:(unsigned int)a0 error:(id *)a1;
- (char)disableConsumptionOfDataSources:(unsigned int)a0 error:(id *)a1;
- (char)donateSearchableItem:(id)a0 error:(id *)a1;
- (char)enableConsumptionOfDataSources:(unsigned int)a0 error:(id *)a1;
- (char)harvestWithError:(id *)a0;
- (char)overrideIsConnectedToPower:(id)a0 error:(id *)a1;
- (char)refillHarvestBudgetWithError:(id *)a0;
- (char)restoreConsumptionOfDataSources:(unsigned int)a0 error:(id *)a1;

@end
