@interface TRIStorageManagement : NSObject <TRIStorageManagementProtocol>

- (BOOL)_readSchemaVersion:(unsigned int *)a0 fileExists:(BOOL *)a1;
- (BOOL)_writeSchemaVersion:(unsigned int)a0;
- (BOOL)_runNamespaceDatabaseBlock:(id /* block */)a0;
- (BOOL)_readDeviceIdWithSchemaVersion:(unsigned int)a0 intoData:(id *)a1;
- (void)_eliminateAllMAAssets;
- (BOOL)_clearStorage;
- (BOOL)prepareTrialStorage;
- (BOOL)_clearContainerStorage;
- (void)_notifyNamespaceUpdated;
- (BOOL)_writeDeviceIdWithData:(id)a0 schemaVersion:(unsigned int)a1;
- (BOOL)requestTrialStorageResetOnNextLaunch;

@end
