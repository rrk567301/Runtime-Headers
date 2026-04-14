@class _PASXPCClientHelper;

@interface HVXPCInternalService : NSObject {
    _PASXPCClientHelper *_helper;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)deleteContentWithRequest:(id)a0 error:(id *)a1;
- (id)synchronousProxy;
- (id)statsWithError:(id *)a0;
- (BOOL)enableConsumptionOfDataSources:(unsigned int)a0 error:(id *)a1;
- (BOOL)disableConsumptionOfDataSources:(unsigned int)a0 error:(id *)a1;
- (BOOL)restoreConsumptionOfDataSources:(unsigned int)a0 error:(id *)a1;
- (BOOL)contentAvailableFromSources:(unsigned int)a0 error:(id *)a1;
- (BOOL)overrideIsConnectedToPower:(id)a0 error:(id *)a1;
- (BOOL)refillHarvestBudgetWithError:(id *)a0;
- (BOOL)donateSearchableItem:(id)a0 error:(id *)a1;
- (BOOL)harvestWithError:(id *)a0;

@end
