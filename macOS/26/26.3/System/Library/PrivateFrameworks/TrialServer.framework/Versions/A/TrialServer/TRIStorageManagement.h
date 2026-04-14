@interface TRIStorageManagement : NSObject <TRIStorageManagementProtocol>

- (BOOL)_runNamespaceDatabaseBlock:(id /* block */)a0;
- (BOOL)_readSchemaVersion:(unsigned int *)a0 fileExists:(BOOL *)a1;
- (BOOL)_clearContainerStorage;
- (BOOL)_writeDeviceIdWithData:(id)a0 schemaVersion:(unsigned int)a1;
- (BOOL)_readDeviceIdWithSchemaVersion:(unsigned int)a0 intoData:(id *)a1;
- (void)_eliminateAllMAAssets;
- (void)_notifyNamespaceUpdated;
- (BOOL)_clearStorage;
- (BOOL)requestTrialStorageResetOnNextLaunch;
- (BOOL)_writeSchemaVersion:(unsigned int)a0;
- (BOOL)prepareTrialStorage;

@end
