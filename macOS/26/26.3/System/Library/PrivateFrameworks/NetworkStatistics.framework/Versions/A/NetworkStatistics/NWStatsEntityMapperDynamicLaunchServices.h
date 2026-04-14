@class NWStatsEntityMapCache;

@interface NWStatsEntityMapperDynamicLaunchServices : NWStatsEntityMapperNEHelper {
    NWStatsEntityMapCache *_entityMap;
    void *_coreServicesDylibHandle;
    Class _LSPlugInKitProxyClass;
    Class _LSApplicationWorkspaceClass;
    Class _LSApplicationProxyClass;
}

- (id)_attemptConvertingPluginNameToContainingAppName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)stateDictionary;
- (void)dealloc;
- (id)_identifierForUUID:(id)a0 fromSet:(id)a1;
- (id)extensionNameForUUID:(id)a0;
- (id)handleNewUUID:(id)a0;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;

@end
