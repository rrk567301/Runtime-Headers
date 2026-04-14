@interface TRIStorageManagement : NSObject <TRIStorageManagementProtocol>

- (BOOL)_clearStorage;
- (BOOL)_clearContainerStorage;
- (BOOL)_readDeviceIdWithSchemaVersion:(unsigned int)a0 intoData:(id *)a1;
- (BOOL)prepareTrialStorage;
- (BOOL)_writeSchemaVersion:(unsigned int)a0;
- (void)_notifyNamespaceUpdated;
- (BOOL)_writeDeviceIdWithData:(id)a0 schemaVersion:(unsigned int)a1;
- (BOOL)requestTrialStorageResetOnNextLaunch;
- (void)_eliminateAllMAAssets;
- (BOOL)_readSchemaVersion:(unsigned int *)a0 fileExists:(BOOL *)a1;
- (BOOL)_runNamespaceDatabaseBlock:(id /* block */)a0;

@end
