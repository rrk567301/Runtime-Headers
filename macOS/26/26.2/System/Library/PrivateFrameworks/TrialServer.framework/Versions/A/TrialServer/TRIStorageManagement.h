@interface TRIStorageManagement : NSObject <TRIStorageManagementProtocol>

- (BOOL)_runNamespaceDatabaseBlock:(id /* block */)a0;
- (void)_eliminateAllMAAssets;
- (BOOL)prepareTrialStorage;
- (BOOL)_writeSchemaVersion:(unsigned int)a0;
- (void)_notifyNamespaceUpdated;
- (BOOL)requestTrialStorageResetOnNextLaunch;
- (BOOL)_readDeviceIdWithSchemaVersion:(unsigned int)a0 intoData:(id *)a1;
- (BOOL)_clearStorage;
- (BOOL)_readSchemaVersion:(unsigned int *)a0 fileExists:(BOOL *)a1;
- (BOOL)_clearContainerStorage;
- (BOOL)_writeDeviceIdWithData:(id)a0 schemaVersion:(unsigned int)a1;

@end
