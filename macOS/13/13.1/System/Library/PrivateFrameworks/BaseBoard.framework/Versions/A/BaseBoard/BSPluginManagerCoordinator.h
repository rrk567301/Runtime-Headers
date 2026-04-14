@class NSMutableDictionary;

@interface BSPluginManagerCoordinator : NSObject {
    NSMutableDictionary *_managersByBundleID;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)registerPlugins;
- (void)registerPluginsFromBundle:(id)a0;
- (id)mainPluginManager;
- (id)pluginManagerForBundle:(id)a0;

@end
