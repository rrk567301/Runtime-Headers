@class NSXPCConnection;
@protocol KernelManagementClientProtocol;

@interface KernelManagementClient : NSObject {
    NSXPCConnection<KernelManagementClientProtocol> *_xpcConn;
}

@property (readonly) NSXPCConnection<KernelManagementClientProtocol> *connection;

+ (id)sharedClient;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (char)enumerateKernelExtension:(id /* block */)a0 error:(id *)a1;
- (char)checkAllFilesets:(id *)a0;
- (char)clearAllStagedExtensions:(id *)a0;
- (char)daemonIsReachable;
- (id)dumpStateWithError:(id *)a0;
- (id)getCollectionPathWithCollection:(id)a0 withError:(id *)a1;
- (char)loadExtensionsWithPaths:(id)a0 withError:(id *)a1;
- (char)loadExtensionsWithPaths:(id)a0 withIdentifiers:(id)a1 withNoAuth:(char)a2 withError:(id *)a3;
- (char)loadExtensionsWithPaths:(id)a0 withIdentifiers:(id)a1 withPersonalityNames:(id)a2 options:(unsigned long long)a3 withError:(id *)a4;
- (char)loadExtensionsWithPaths:(id)a0 withIdentifiers:(id)a1 withPersonalityNames:(id)a2 withDependencyAndFolderPaths:(id)a3 options:(unsigned long long)a4 withError:(id *)a5;
- (char)loadExtensionsWithPaths:(id)a0 withIdentifiers:(id)a1 withPersonalityNames:(id)a2 withNoAuth:(char)a3 withError:(id *)a4;
- (char)loadExtensionsWithPaths:(id)a0 withNoAuth:(char)a1 withError:(id *)a2;
- (char)migrateAuxKCForVolumeGroupUUID:(id)a0 withMigrationSuccess:(char)a1 withRebootRequired:(char *)a2 withError:(id *)a3;
- (id)pathOfExtensionWithIdentifier:(id)a0 withError:(id *)a1;
- (id)pathOfLoadableKernelCollectionOfType:(unsigned long long)a0 withError:(id *)a1;
- (char)rebuildAuxiliaryKernelCollectionWithInterface:(id)a0 rebootRequired:(char *)a1 withError:(id *)a2;
- (char)triggerAuxKCCleanup:(id)a0 withError:(id *)a1;
- (char)triggerPanicMedicInRecoveryWithPath:(id)a0 withError:(id *)a1;
- (char)unloadExtensionsWithIdentifiers:(id)a0 withClassNames:(id)a1 options:(unsigned long long)a2 withError:(id *)a3;

@end
