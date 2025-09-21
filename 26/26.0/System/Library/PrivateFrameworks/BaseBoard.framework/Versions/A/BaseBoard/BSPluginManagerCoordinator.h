@class NSMutableDictionary;

@interface BSPluginManagerCoordinator : NSObject {
    NSMutableDictionary *_managersByBundleID;
}

+ (id)sharedInstance;

- (id)pluginManagerForBundle:(id)a0;
- (void)registerPlugins;
- (void)registerPluginsFromBundle:(id)a0;
- (id)mainPluginManager;
- (void).cxx_destruct;

@end
