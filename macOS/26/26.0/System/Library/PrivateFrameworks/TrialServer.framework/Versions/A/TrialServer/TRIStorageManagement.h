@interface TRIStorageManagement : NSObject <TRIStorageManagementProtocol>

- (BOOL)requestTrialStorageResetOnNextLaunch;
- (BOOL)_clearStorage;
- (BOOL)_writeSchemaVersion:(unsigned int)a0;
- (BOOL)_clearContainerStorage;
- (BOOL)_readDeviceIdWithSchemaVersion:(unsigned int)a0 intoData:(id *)a1;
- (BOOL)_readSchemaVersion:(unsigned int *)a0 fileExists:(BOOL *)a1;
- (BOOL)_runNamespaceDatabaseBlock:(id /* block */)a0;
- (void)_eliminateAllMAAssets;
- (BOOL)prepareTrialStorage;
- (BOOL)_writeDeviceIdWithData:(id)a0 schemaVersion:(unsigned int)a1;
- (void)_notifyNamespaceUpdated;

@end
