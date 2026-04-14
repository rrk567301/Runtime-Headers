@class NSMutableDictionary, UpdaterSessionParameters, NSMutableSet, NSMutableArray;

@interface UAUSession : NSObject

@property (retain) UpdaterSessionParameters *sessionParams;
@property (retain) NSMutableArray *asyncSafePlugins;
@property (retain) NSMutableArray *plugins;
@property (retain) NSMutableSet *optedOutPluginIDs;
@property (retain) NSMutableDictionary *pluginToBundleIDMap;

- (id)initWithParameters:(id)a0;
- (void).cxx_destruct;
- (void)loadOnePlugin:(id)a0 fromBundle:(id)a1 withOverrideID:(id)a2;
- (void)loadPlugins;
- (void)processPluginsWithPrivilege:(BOOL)a0;
- (void)runOnePlugin:(id)a0 withPrivilege:(BOOL)a1 withCompletedSet:(id)a2 andQueue:(id)a3;

@end
