@interface TRIStorageManagement : NSObject <TRIStorageManagementProtocol>

- (char)_clearContainerStorage;
- (char)_clearStorage;
- (void)_eliminateAllMAAssets;
- (void)_notifyNamespaceUpdated;
- (char)_readDeviceIdWithSchemaVersion:(unsigned int)a0 intoData:(id *)a1;
- (char)_readSchemaVersion:(unsigned int *)a0 fileExists:(char *)a1;
- (char)_runNamespaceDatabaseBlock:(id /* block */)a0;
- (char)_writeDeviceIdWithData:(id)a0 schemaVersion:(unsigned int)a1;
- (char)_writeSchemaVersion:(unsigned int)a0;
- (char)prepareTrialStorage;
- (char)requestTrialStorageResetOnNextLaunch;

@end
