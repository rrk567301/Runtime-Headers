@interface ULMicroLocationReconstructionLearner : NSObject

@property BOOL onlyRunWhileMicrolocationsEnabled;

- (id)initWithLogicAdapter:(struct ULLogicAdapterImpl { } *)a0 databaseStore:(struct ULDatabaseStoreInterface { } *)a1 databaseManagementInterface:(struct ULDatabaseManagementInterface { } *)a2;
- (void)executeWorkItemsWithCancel:(id /* block */)a0;

@end
