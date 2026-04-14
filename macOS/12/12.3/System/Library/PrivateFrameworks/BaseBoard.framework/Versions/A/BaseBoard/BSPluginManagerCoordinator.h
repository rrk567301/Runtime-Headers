@class NSMutableDictionary;

@interface BSPluginManagerCoordinator : NSObject {
    NSMutableDictionary *_managersByBundleID;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)registerPluginsFromBundle:(id)a0;
- (id)pluginManagerForBundle:(id)a0;
- (void)registerPlugins;
- (id)mainPluginManager;

@end
