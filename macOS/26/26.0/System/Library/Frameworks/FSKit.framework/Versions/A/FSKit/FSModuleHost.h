@class _EXQueryController, NSString, NSArray, NSSet, NSCondition, NSDictionary, NSObject, LSObserver;
@protocol OS_dispatch_queue;

@interface FSModuleHost : NSObject <LSObserverDelegate> {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id _matchingContext;
    LSObserver *_observer;
    NSSet *_moduleUUIDs;
    NSArray *_enabledModules;
}

@property (copy) id /* block */ modulesLoaded;
@property (copy) id /* block */ modulesUnloaded;
@property (readonly, copy, nonatomic) NSDictionary *currentExtensionsByIdentifier;
@property (readonly, copy) NSArray *modules;
@property (readonly, copy) NSDictionary *modulesByIdentifier;
@property (retain) NSCondition *queryLock;
@property (retain) _EXQueryController *queryController;
@property BOOL queryReceivedFirstDelegateCall;
@property (copy) id /* block */ modulesLoaded;
@property (copy) id /* block */ modulesUnloaded;
@property (retain) NSArray *moduleOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultHost;
+ (id)defaultInstanceUUID;
+ (id)defaultProbeOrderList;
+ (id)installedExtensionPropertiesSync;
+ (id)installedExtensionsSync;

- (void)_updateProviderListForMatchingExtensionRecords:(id)a0;
- (id)extensionTypes;
- (id)init;
- (void)setExtensions:(id)a0;
- (void)observerDidObserveDatabaseChange:(id)a0;
- (void)afterFirstDiscovery;
- (id)extensionPointRecords;
- (void)forceSynchronousProviderUpdate;
- (void).cxx_destruct;
- (id)loadEnabledList;
- (void)removeBundleFromEnabledModules:(id)a0;
- (void)saveEnabledList;
- (void)_updateProviderListForFilteredFSModuleInstances:(id)a0;
- (void)addBundleToEnableModules:(id)a0;
- (id)configurationForInstance:(id)a0 ofBundle:(id)a1;
- (id)currentExtensions;
- (id)initWithProbeList:(BOOL)a0;
- (unsigned char)isValidModuleIdentifier:(id)a0 withError:(id *)a1;
- (void)loadModulesAndMonitor;
- (void)loadModulesFromEKit;
- (void)loadModulesFromLSAndMonitor;
- (id)loadProbeOrderList;
- (id)moduleForBundleID:(id)a0;
- (void)saveProbeOrderList;
- (void)setExtensionsByIdentifierLocked:(id)a0;
- (void)setExtensionsLocked:(id)a0;

@end
